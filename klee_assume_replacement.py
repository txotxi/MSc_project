#Replace all the calls to klee_assume in a c program
import sys

def overwrite_file(file,lines):
    file.seek(0)
    file.truncate()
    file.writelines(lines)

if __name__=='__main__':
    program_file = open(sys.argv[1],"r+")
    program_lines=program_file.readlines()
    for i in range(len(program_lines)):
        l = program_lines[i]
        if ("klee_assume" in l) and ("//" not in l):
            print(l)
            splitted=l.split("klee_assume")
            print(splitted)
            argument=splitted[1]
            tab = splitted[0]
            argument = argument.split(';\n')
            print(argument)
            condition = argument[0]
            print(condition)
            new_line = tab + "if (! ("+condition+")) exit(0);\n"
            program_lines[i]=new_line
    overwrite_file(program_file,program_lines)
    program_file.close()
        
