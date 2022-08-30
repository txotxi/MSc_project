#Converts the smt2 files which are given as solutions by stp to actual integers
#This program is necessary since stp gives the solution byte by byte for
#each variable.
#For now, it does not support arrays or unions and structures

import sys
#TODO : Add support for different types of variables like arrays

if __name__ == '__main__':
    solution_file = open(sys.argv[1],'r')
    solution_lines = solution_file.readlines()
    #Values for the variables will be stored in a list
    variables={}
    output=""
    for l in solution_lines:
        if 'define-fun' in l:
            split0=l.split('|')
            var_name=split0[1]
            if var_name not in variables.keys():
                size=split0[2].split(') (')
                size=size[0].split(' ')[-1]
                variables[var_name]=[]
            temp=split0[-1].split(')(')
            #Getting the byte index of the variable we are considering
            index=int(temp[1].split(" ")[1][2:])
            #Getting the value
            value=int(temp[-1].split(" ")[1][2:])
            if len(variables[var_name])>index:
                #The list is long enough
                variables[var_name][index]=value
            else:
                #Not long enough, need to add elements
                variables[var_name]=variables[var_name]+[0]*(index+1-len(variables[var_name]))
                variables[var_name][index]=value
    for var in variables.keys():
        value =int.from_bytes(variables[var],"little")
        output+="name "+var
        output+=" value "+str(value)
    print(output)
