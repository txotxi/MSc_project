#Performs a disjunction oracle run on one file only
#Mainly used to replay bugs

#!/bin/sh

#The number of symbolic variables in the files under test.
#Each set of files is in a different folder
#Files were created for 2,3,4,5,10 an 15 symbolic variables
sym_var_num=3
#Number of the file under test
file_number=876

#Two different setups : one for the case where the file is among the files generated for the oracle comparison, and the other is in the case where the file is part of the 1000 csmith generated files
COMMENT="FILE=klee_local/experiments/csmith_files_${sym_var_num}_sym_var/csmith_file_$file_number.c
file_name=${FILE/klee_local\/experiments\/csmith_files_${sym_var_num}_sym_var}
no_extension=${FILE/.c}
folder_name=${no_extension/klee_local\/experiments\/csmith_files_${sym_var_num}_sym_var\/}
result_folder=klee_local\/results\/$folder_name
llvm_file=${FILE/.c/.bc}
assembly_file=$result_folder/assembly.ll"

FILE=klee_local/experiments/csmith_files/csmith_file_${file_number}.c
file_name=${FILE/klee_local\/experiments\/csmith_files}
no_extension=${FILE/.c}
folder_name=${no_extension/klee_local\/experiments\/csmith_files\/}
result_folder=klee_local\/results\/${folder_name}_replay
llvm_file=${FILE/.c/.bc}
assembly_file=$result_folder/assembly.ll

echo $FILE
echo $result_folder

#Run klee on the file
clang-9 -I klee_local/klee/include -I csmith-2.3.0/runtime -fno-discard-value-names -emit-llvm -c -g -O0 -Xclang -disable-O0-optnone $FILE -Wno-everything -o $llvm_file

rm -rf $result_folder

./klee_local/klee/build/bin/klee --write-smt2s --write-kqueries --emit-all-errors --max-time=3min --output-dir=$result_folder $llvm_file

#Get number of paths/number of ktest (to check if it was stopped properly or not)
num_smt2=$(find $result_folder -name "*.smt2" | wc -l)
num_ktest=$(find $result_folder -name "*.ktest" | wc -l)

echo $num_smt2
echo $num_ktest

#Run disjunction oracle on the result (since it does not modify the files) and time it
touch $result_folder\/results.txt
python z3_parsing.py $result_folder >> $result_folder/results.txt
python disjunction_result_analysis.py $result_folder 'UNIQUE RUN DISJUNCTION'
