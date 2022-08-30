#Modifies the csmith file so that it can be used by klee
#Adds the include klee and the make symbolic for the checksum.

from operator import index
import sys

def overwrite_file(file,lines):
    #Overwrites the entire file with the lines provided
    file.seek(0)
    file.truncate()
    file.writelines(lines)

def find_include(lines):
    #Finds the index of the statement #include csmith.h
    for i in range(len(lines)):
        if lines[i]=='#include "csmith.h"\n':
            return i+1

def add_csmith(lines):
    #Adds the #include "klee/klee.h" statement
    include_line=find_include(lines)
    lines.insert(include_line,'#include "klee/klee.h"\n')
    return lines

def find_global_variables(lines):
    #Find the line where the global variables are declared
    for i in range (len(lines)):
        if lines[i]=="/* --- GLOBAL VARIABLES --- */\n":
            return i

def find_main(lines):
    #Returns the index of the beginning of the main function
    for i in range(len(lines)):
        if lines[i]=="int main(int argc, char *argv[])\n" or lines[i]=='int main (int argc, char* argv[])\n':
            return i

def get_var_names(lines,sym_num,index_global):
    #Returns the names of the first sym_num variables declared
    sym_var=[]
    for i in range(index_global+1,index_global+sym_num+1):
        #Keep declare var untouched in case we need to overwrite the line
        #print(lines[i]=='\n')
        if lines[i]=='\n':
            break
        declare=lines[i].split(" = ")[0]
        split0=declare.split(' ')
        name=split0[-1]
        #Sometimes a value is given to only one element in an array
        if '[' in name:
            split1=name.split('[')
            name = split1[0]
        #To get rid of the * character in front of a pointer
        if '*' in name:
            name_real=''
            for i in range(len(split0[-1])):
                if split0[-1][i]!='*':
                    name_real+=split0[-1][i]
            name=name_real
        sym_var.append(name)
    return sym_var

def insert_make_symbolic(lines,var_name,index_main):
    #Inserts the call to klee_make_symbolic for a certain variable
    index=index_main+2
    for var in var_name:
        line = '    klee_make_symbolic(&'+var+',sizeof('+var+'),'+'"'+var+'");\n'
        lines.insert(index,line)
    return lines

def index_stats(lines,index_main):
    #Gets the index of the statistics part, therefore end of the main function
    index_stats = 0
    for i in range(index_main,len(lines)):
        if "************************ statistics *************************" in lines[i]:
            index_stats=i
    return index_stats

def comment_crc(lines,sym_var,index_main,index_stats):
    #Comments the call to transparent_crc function for symbolic variables, since it is not possible to print
    #A symbolic variable
    for i in range(len(lines)-index_main,index_stats):
        if "transparent_crc" in lines[i]:
            for var in sym_var:
                if ('"'+var+'"' in lines[i]) or (var+"." in lines[i]) or (var+"[" in lines[i]):
                    # Find where transparent_crc is
                    start=lines[i].find("transparent_crc")
                    # Add comment sign before
                    lines[i]=lines[i][:start]+'//'+lines[i][start:]
    return lines

if __name__=='__main__':
    sym_num = int(sys.argv[2])
    csmith_file = open(sys.argv[1],"r+")
    csmith_lines=csmith_file.readlines()
    index_global=find_global_variables(csmith_lines)
    sym_var_names=get_var_names(csmith_lines,sym_num,index_global)
    index_main=find_main(csmith_lines)
    #Sometimes, only a couple (or no) symbolic variables are declared
    #This is to prevent that in the files that we generate
    if len(sym_var_names)==sym_num:
        csmith_lines=insert_make_symbolic(csmith_lines,sym_var_names,index_main)
        idx_stats=index_stats(csmith_lines,index_main)
        csmith_lines=comment_crc(csmith_lines,sym_var_names,index_main,idx_stats)
        overwrite_file(csmith_file,csmith_lines)
    csmith_file.close()