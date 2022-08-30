#This script uses already created csmith files and runs the disjunction exhaustiveness oracle on them.

#!/bin/sh

cd ~
cd /mnt/c/Users/loupa/Documents/ICL/Individual_Project/


for test_number in {1..1000}
do    
    FILE=klee_local/experiments/csmith_files/csmith_file_${test_number}.c
    file_name=${FILE/klee_local\/experiments\/csmith_files}
    no_extension=${FILE/.c}
    folder_name=${no_extension/klee_local\/experiments\/csmith_files\/}
    result_folder=klee_local\/results\/${folder_name}_disjunction
    llvm_file=${FILE/.c/.bc}
    assembly_file=$result_folder/assembly.ll

    clang-9 -I klee_local/klee/include -I csmith-2.3.0/runtime -fno-discard-value-names -emit-llvm -c -g -O0 -Xclang -disable-O0-optnone $FILE -Wno-everything -o $llvm_file

    rm -rf $result_folder

    ./klee_local/klee/build/bin/klee --write-smt2s --write-kqueries --emit-all-errors --max-tests=10000  --max-time=3min --output-dir=$result_folder $llvm_file

    #In the case where KLEE didn't stop correctly and didn't write every file
    num_smt2=$(find $result_folder -name "*.smt2" | wc -l)
    num_ktest=$(find $result_folder -name "*.ktest" | wc -l)

    #In practice, this is not useful anymore
    if [[ $num_smt2 == $num_ktest ]];
    then
        python z3_parsing.py $result_folder >> $result_folder/results.txt

        #Analyse the results
        python disjunction_result_analysis.py $result_folder "exhaustiveness_disjunction"

        #If the exit code is not 0 (ie there is an issue with the example)
        if [ $? != 0 ];
        then
            dir_name="problematic_examples/bug_exhaustiveness_disj_$test_number"
            mkdir $dir_name
            #Save the files
            cp $FILE $dir_name
            for RESULT_FILE in $resut_folder/*.smt2;
            do
                cp $result_folder/*.smt2 $dir_name
            done
            cp $result_folder/results.txt $dir_name
        fi
    else
        echo $FILE >> watchdog_errors.txt
    fi
done