#Runs the precision oracle on a c file

#!/bin/sh

#Generate program
FILE="klee_local/experiments/csmith_files/csmith_file_2.c"
file_name=${FILE/klee_local\/experiments\/csmith_files\/}
no_extension=${FILE/.c}
folder_name=${no_extension/klee_local\/experiments\/csmith_files\/}
result_folder=klee_local\/results\/$folder_name
bc_file=$no_extension.bc
result_file=klee_local/experiments/csmith_files/klee_output.txt
variables_file=klee_local/experiments/csmith_files/variable_${file_name/.c}.txt

#Variables
ctags --c-kinds=lv -f - $FILE | cut -d$'\t' -f1 >> $variables_file

#Modify Klee to get the expressions
python file_modification_precision.py $FILE $variables_file

#Run Klee
clang-9 -I klee_local/klee/include -I csmith-2.3.0/runtime -fno-discard-value-names -emit-llvm -c -g -O0 -Xclang -disable-O0-optnone $FILE -o $bc_file

rm -rf $result_folder
rm $result_file

./klee_local/klee/build/bin/klee --write-smt2s --write-kqueries --emit-all-errors --max-time=1min --watchdog --output-dir=$result_folder $bc_file 2> $result_file

echo $result_folder
###### For each path 
for RESULT in $result_folder/*.smt2
do
    rm $result_folder/constraint_solved.txt
    echo $RESULT
    #Modify the file to get the model (result of the constraint)
    python precision_smt_modification.py $RESULT

    #Solve the constraints
    ./stp/build/stp $RESULT >> $result_folder/constraint_solved.txt

    #Convert the result in an actual output
    python3 convert_smt2_int.py $result_folder/constraint_solved.txt

    ###### Symbolic mode

    #Get the values of all the variables based on the values

    ###### Concrete mode

    #Add the prints to get the final values

    #Run the program in concrete mode

    ###### Comparison

    #Compare the results

    #Save potential bug"
done
