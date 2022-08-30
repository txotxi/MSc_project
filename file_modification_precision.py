#Modifies the c program to add calls to klee_print_expr for every
#variables which is not symbolic

import sys
import os
import re

def overwrite_file(file,lines):
    file.seek(0)
    file.truncate()
    file.writelines(lines)

def find_make_symbolic(file_path):
    #Gets the names of the symbolic variables in the program and the name which
    #is saved by klee (as they can be different)
    symbolic_var=[]
    program_file=open(file_path,"r+")
    lines=program_file.readlines()
    for i in range(len(lines)):
        #Finding the lines which make the variables symbolic
        if ("klee_make_symbolic" in lines[i]) and ("//" not in lines[i]):
            splitted=lines[i].split(',')
            if len(splitted) !=1:
                #Getting the name in the program
                raw_name = splitted[0]
                if "&" in raw_name:
                    var_name=raw_name.split('(')[1]
                    var_name=var_name[1:]
                else:
                    var_name=raw_name.split('(')[1]
                    var_name=var_name[0:]
                #Getting the symbolic name
                splitted[2]=splitted[2].split(';')[0]
                if sys.argv[1]=="Klee/experiments/test_suite/replay_two_objects.c"or sys.argv[1]=="Klee/experiments/test_suite/2017-11-01-test-with-empty-varname.c":
                    sym_name="unnamed"
                elif splitted[2][0] == " ":
                    sym_name=splitted[2][2:-2]
                else :
                    sym_name=splitted[2][1:-2] 
            else :
                sym_name="unnamed"
                var_name="unnamed"
            symbolic_var.append(var_name)
        elif ("klee_int" in lines[i])and ("//" not in lines[i]):
            splitted=lines[i].split('"')
            #print(splitted==lines[i])
            #print(lines[i])
            if len(splitted) != 1:
                sym_name=splitted[-2]
                if ("NULL" in sym_name)or(sym_name==""):
                    sym_name=="unnamed"
                splitted = lines[i].split("=")
                for i in range (len(splitted)):
                    if "klee_int" in splitted[i]:
                        splitted = splitted[i-1].split(" ")
                        var_name = splitted[-2]
            else:
                sym_name="unnamed"
                splitted = lines[i].split("=")
                for i in range (len(splitted)):
                    if "klee_int" in splitted[i]:
                        splitted = splitted[i-1].split(" ")
                        var_name = splitted[-2]
            symbolic_var.append(var_name)
        elif ("klee_range" in lines[i])and ("//" not in lines[i]):
            splitted=lines[i].split('"')
            #print(splitted)
            if len(splitted) != 1:
                sym_name=splitted[-2]
                if ("NULL" in sym_name)or(sym_name==""):
                    sym_name=="unnamed"
                splitted = lines[i].split("=")
                for i in range (len(splitted)):
                    if "klee_int" in splitted[i]:
                        splitted = splitted[i-1].split(" ")
                        var_name = splitted[-2]
            else:
                sym_name="unnamed"
                splitted = lines[i].split("=")
                for i in range (len(splitted)):
                    if "klee_int" in splitted[i]:
                        splitted = splitted[i-1].split(" ")
                        var_name = splitted[-2]
            symbolic_var.append('x')
    return symbolic_var

def find_end_main(lines):
    #Finds the end of the main function
    main_started=0
    end_main=-1
    for i in range(len(lines)):
        if ("int main(" in lines[i]) or ("int main (" in lines[i]):
            main_started = 1
        if "return 0" in lines[i] and main_started:
            end_main=i
    return end_main

if __name__=='__main__':
    #argv[1] c file
    #argv[2] variables file
    program_file=open(sys.argv[1],"r+")
    program_lines=program_file.readlines()

    #Get all symbolic variables
    symbolic_variables=find_make_symbolic(sys.argv[1])

    #Find end of the main function
    end_main=find_end_main(program_lines)

    variables_file=open(sys.argv[2],"r")
    variables_lines=variables_file.readlines()
    
    #Get the names of the non-symbolic variables
    to_print=[]
    for var in variables_lines:
        if var[:-1] not in symbolic_variables and "g_" in var:
            to_print.append(var[:-1])

    #Add the print expr
    for var in to_print:
        line='klee_print_expr("'+var+'=",'+var+');'+'\n'
        program_lines.insert(end_main,line )

    #Write in the same file
    overwrite_file(program_file,program_lines)