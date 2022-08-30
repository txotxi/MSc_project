#Modifies the smt2 file to get a possible solution to the constraints

import sys
import random

def overwrite_file(file,lines):
    file.seek(0)
    file.truncate()
    file.writelines(lines)

def get_sat_index(lines):
    #Gets the index of the line that marks the end of the query
    check_sat_index = 0
    for l in lines:
        check_sat_index+=1
        if "check-sat" in l:
            break
    return check_sat_index

def check_declare(lines, variable):
    #Checks if a variable is declared
    for l in lines:
        if ("declare-fun "+ variable) in l:
            return True
    return False

def check_all_declare(lines,variables):
    #Checks if all variables are declared
    index_declared = []
    for var in variables:
        var_name=var[0]
        if (check_declare(lines, var_name)):
            #Keep in mind that the variable is declared
            index_declared.append(variables.index(var))
    return index_declared

def sanitize_input(input):
    #Prepares the input to be added to the file
    input = input.split("\n")
    for i in range(len(input)):
        input[i]=input[i].split(" ")
    return (input)


def modify_file(smt2_file):
    smt_file = open(smt2_file,"r+")
    smt_lines = smt_file.readlines()
    #Check if every variable si declared
    check_sat_index = get_sat_index(smt_lines)
    #Adds the line to get a possible value for each variable
    smt_lines.insert(check_sat_index,"(get-model)\n")   
    overwrite_file(smt_file,smt_lines)
    smt_file.close()


if __name__=='__main__':
    #sys.argv[1] = smt2 file
    #sys.argv[2] = inputs
    modify_file(sys.argv[1])