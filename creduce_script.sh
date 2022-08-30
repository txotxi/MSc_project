#Script used by creduce to decide if a program is still interesting
#The criteria here is whether the oracle still returns an error

#!/bin/bash


#Number of the csmith_file to test
file_number=201

cd ~
cd /mnt/c/Users/loupa/Documents/ICL/Individual_Project/

FILE=klee_local/experiments/csmith_files/csmith_file_${file_number}.c
no_extension=${FILE/.c}
folder_name=${no_extension/klee_local\/experiments\/csmith_files\/}
result_folder=klee_local\/results\/${folder_name}_reduce
llvm_file=${FILE/.c/.bc}
assembly_file=$result_folder/assembly.ll

echo $FILE
echo $result_folder

#Run klee on the file
clang-9 -I klee_local/klee/include -I csmith-2.3.0/runtime -fno-discard-value-names -emit-llvm -c -g -O0 -Xclang -disable-O0-optnone $FILE -Wno-everything -o $llvm_file

rm -rf $result_folder

./klee_local/klee/build/bin/klee --write-smt2s --write-kqueries --emit-all-errors --max-time=3min --output-dir=$result_folder $llvm_file

#Run disjunction oracle on the result (since it does not modify the files) and time it
touch $result_folder\/results.txt
python z3_parsing.py $result_folder >> $result_folder/results.txt
python disjunction_result_analysis.py $result_folder 'CREDUCE'

if [ $? != 0 ];
then
    exit 0
else
    exit 1
fi