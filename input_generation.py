#Generates a random imput for each variable based on its type.

import sys
import random
from bitstring import BitArray

def find_make_symbolic(file_path):
    #Gets the names of the variables as seen in the program and in KLEE
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
            symbolic_var.append([var_name,sym_name])
        elif ("klee_int" in lines[i])and ("//" not in lines[i]):
            splitted=lines[i].split('"')
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
            symbolic_var.append([var_name,sym_name])
        elif ("klee_range" in lines[i])and ("//" not in lines[i]):
            splitted=lines[i].split('"')
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
            symbolic_var.append(['x',sym_name])
    return symbolic_var

def find_var_declaration(var_name,lines):
    #Finds where the variable is declared in the llvm file
    index=0
    for j in range(len(lines)):
        if (("!DILocalVariable" in lines[j]) and ('"'+var_name+'"' in lines[j])) or (("!DIGlobalVariable" in lines[j]) and ('"'+var_name+'"' in lines[j])):
            index = j
    return index

def get_type_line(index,lines):
    #Get the !number of the type
    if ("!DIGlobalVariable" in lines[index]):
        number = int(lines[index].split(" = ")[0][1:])
        #Get the !number of the type
        type_split=lines[index].split("type: ")[-1] 
        type_number=int(type_split.split(',')[0][1:])
        #To get the rid of the ! and )\n
        type_line = lines[index+(type_number-number)]
    else:
        number = int(lines[index].split(" = ")[0][1:])
        type_number=int(lines[index].split("type: ")[-1][1:-2]) #To get the rid of the ! and )\n
        type_line = lines[index+(type_number-number)] #Rather do calculus on the number of lines than go through the entire file again.
    return type_line

def get_var_type(var,lines, type_line, index_var):
    #Gets the type of a variable
    var_type=""
    var_size=0
    while ("!DIBasicType"not in type_line and "typedef" not in type_line):
        if "!DICompositeType" in type_line:
            if "structure_type" in type_line or "union_type" in type_line:
                #Get the list of elements
                current_index=lines.index(type_line)
                elements_number = int(type_line.split('elements: !')[-1][:-2])
                line_number = int(type_line.split(' = ')[0][1:])
                elements_index=current_index+(elements_number-line_number)
                elements_line=lines[elements_index]
                split=elements_line.split('!')
                beginning_list=split.index('{')
                var_type="structure"
                var_size="undefined"
                var.append(var_type)
                var.append(var_size)
                for i in range(beginning_list+1,len(split)):
                    #Get the element line
                    el_number=int(split[i][:-2])
                    el_index=elements_index+(el_number-elements_number)
                    el_line=lines[el_index]
                    #Get the name corresponding to the element
                    pre_split = el_line.split('name: "')[1]
                    el_name=pre_split.split('",')[0]
                    el=[el_name,el_name]
                    #apply function to element
                    el=get_var_type(el,lines,el_line,el_index)
                    var.append(el)
                #For each element, do the same thing as a normal variable
                break
            else:
                #Get the total size of the array
                split0=type_line.split("size: ")
                total_size=split0[1].split(',')[0]
                #Add this to the main array
                var.append('array')
                var.append(total_size)
                split0=type_line.split('baseType: ')[1]
                baseType_number = int(split0.split(',')[0][1:]  )
                number=int(lines[index_var].split(" = ")[0][1:])
                type_line=lines[index_var+(baseType_number-number)]
        if "!DIDerivedType" in type_line:
            if "pointer" in type_line.split("tag: ")[1]:
                    #It's a pointer
                    var_type='unsigned pointer'
                    var_size='64'
                    var.append(var_type)
                    var.append(var_size)
                    break
            elif "const_type" in type_line.split("tag: ")[1]:
                #Constant
                split0=type_line.split("baseType: ")[1]
                baseType_number = int(split0.split(')')[0][1:]  )
                number=int(lines[index_var].split(" = ")[0][1:])
                type_line=lines[index_var+(baseType_number-number)] 
            elif "volatile" in type_line.split("tag: ")[1]:
                split0=type_line.split("baseType: ")[1]
                baseType_number = int(split0.split(')')[0][1:]  )
                number=int(lines[index_var].split(" = ")[0][1:])
                type_line=lines[index_var+(baseType_number-number)] 
            elif "member" in type_line.split("tag: ")[1]:
                split0=type_line.split("baseType: ")[1]
                baseType_number = int(split0.split(', ')[0][1:]  )
                number=int(lines[index_var].split(" = ")[0][1:])
                type_line=lines[index_var+(baseType_number-number)] 

    if "!DIBasicType" in type_line:
        #It's a basic type, we can get the type and size directly #Get the type from the line
        pre_split = type_line.split('name: "')[1]
        var_type=pre_split.split('",')[0]
        #Get the size
        pre_split= pre_split.split('size: ')[1]
        var_size=pre_split.split(",")[0]
        var.append(var_type)
        var.append(var_size)
    if "typedef" in type_line:
        pre_split = type_line.split('name: "')[1]
        var_type=pre_split.split('",')[0]
        if var_type=="int32_t" or var_type=="uint32_t" or var_type=="uint32":
            var_size='32'
        elif var_type=='int16_t' or var_type=='uint16_t' or var_type=="uint16":
            var_size='16'
        elif var_type=="int8_t" or var_type=='uint8_t' or var_type=="uint8":
            var_size='8'
        elif var_type=="int64_t" or var_type=='uint64_t' or var_type=="uint64":
            var_size='64'
        var.append(var_type)
        var.append(var_size)
    return var



def get_all_types(assembly_path,var_list):
    #Gets the types of all the variables
    assembly_file = open(assembly_path,"r+")
    lines=assembly_file.readlines() 
    var_type=None
    var_size=None      
    for i in range(len(var_list)):
        print(var_list[i])
        if assembly_path=='Klee/results/RewriteEqualities/assembly.ll':
            var_list[i].append('array')
            var_list[i].append('32')
            var_list[i].append("unsigned char")
            var_list[i].append('8')
            break
        elif assembly_path=='Klee/results/InAndOutOfBounds/assembly.ll' or assembly_path=='Klee/results/MultipleReadResolution/assembly.ll' or assembly_path=='Klee/results/MultipleWriteResolution/assembly.ll':
            var_list[i].append('unsigned int')
            var_list[i].append('32')
        var_name=var_list[i][0]
        #Find the line declaring the variable
        index_var=find_var_declaration(var_name,lines)
        type_line=get_type_line(index_var,lines)  
        var_list[i]=get_var_type(var_list[i],lines,type_line, index_var)
    return var_list


def gen_value():
    #Generates a random value of size size (given in bits).
    #The value is generated in a binary format, then converted to decimal format
    value=""
    for _ in range(8):
        value+=str(random.randint(0,1))
    return value

def convert_to_unsigned(input, size):
    #Convers a signed value to an unsigned value
    return (input + 2**(size*8))

def input_format(number):
    #Converts a binary number into a number which matches the defined format
    #Add Padding
    size = len(number)
    if size%8==0:
        missing = 0
    else:
        missing = 8- size%8
    number=missing*'0'+number
    #Split the number
    byte_number = 0
    for i in range(0,len(number),8):
        if i!=0:
            number = number[:i+byte_number]+" "+number[i+byte_number:]
            byte_number+=1
    #Convert every element to int
    bin_values = number.split(" ")
    final_input = ""
    for val in bin_values:
        int_val=int(val,2)
        final_input+=str(int_val)
        final_input+=" "
    return final_input

def get_structure_size(var):
    #Gets the size of the variables when it is a structure type
    size = 0
    for element in var[4:]:
        element_size=element[-1]
        size+=int(element_size)
    return size


def gen_input(program_path,assembly_path):
    #Symbolic var structure :
    #SIZES IN BITS not un bytes
    #[var_name in the program, symbolic_name, type, size] everything as strings
    #In the case where there is an array the structure looks like :
    #[var_name in the program, symbolic_name, 'array', global size, element type, size of element]
    symbolic_var = find_make_symbolic(program_path)
    symbolic_var = get_all_types(assembly_path,symbolic_var)
    print(symbolic_var)
    input=""
    for var in symbolic_var:
        #if 'structure' in var:
        #    print("hello")
        input += var[1]
        input +=" "
        if var[2]=='array':
            number_of_elements = int(var[3])//int(var[-1])
            size = int(var[-1])//8 #Size of one element
        elif var[2]=='structure':
            number_of_elements=len(var[4:])
            size=get_structure_size(var)
        else:
            number_of_elements = 1
            size = int(var[3])//8
        for _ in range(number_of_elements):
            total_number=""
            for i in range(size):
                byte = str(gen_value())
                total_number+=byte
                if (i==size-1):
                    if ("unsigned" not in var[2]):
                        number=BitArray(bin=total_number).int
                        if number <0:
                            unsigned_number=convert_to_unsigned(number,size)
                        else:
                            unsigned_number=number
                        bin_number=bin(unsigned_number)
                        number = input_format(bin_number[2:])
                        input+=str(number)
                    else:
                        number=input_format(total_number)
                        input+=str(number)
        input+=str(size) #(size in bytes )
        input+='\n'
    return input
    
if __name__=='__main__':
    print(gen_input(sys.argv[1],sys.argv[2]))