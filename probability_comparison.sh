#Compares the performance of the two methods in the case where a bug is introduced in KLEE
#With a certain probability

#!/bin/sh

bugs=0

for file_number in {1..200}
do

    #The number of symbolic variables in the files under test.
    #Each set of files is in a different folder
    #Files were created for 2,3,4,5,10 an 15 symbolic variables
    sym_var_num=2
    FILE=klee_local_bugs/experiments/csmith_files/csmith_file_$file_number.c
    file_name=${FILE/klee_local_bugs\/experiments\/csmith_files}
    no_extension=${FILE/.c}
    folder_name=${no_extension/klee_local_bugs\/experiments\/csmith_files\/}
    result_folder=klee_local_bugs\/results\/$folder_name
    llvm_file=${FILE/.c/.bc}
    assembly_file=$result_folder/assembly.ll

    echo $FILE
    echo $result_folder

    #Run klee on the file
    clang-9 -I klee_local_bugs/klee/include -I csmith-2.3.0/runtime -fno-discard-value-names -emit-llvm -c -g -O0 -Xclang -disable-O0-optnone $FILE -Wno-everything -o $llvm_file

    rm -rf $result_folder

    ./klee_local_bugs/klee/build/bin/klee --write-smt2s --write-kqueries --emit-all-errors --max-time=3s --output-dir=$result_folder $llvm_file

    #Get number of paths/number of ktest (to check if it was stopped properly or not)
    num_smt2=$(find $result_folder -name "*.smt2" | wc -l)
    num_ktest=$(find $result_folder -name "*.ktest" | wc -l)

    rm $result_folder/results.txt
    
    #Run disjunction oracle on the result (since it does not modify the files) and time it
    disjunction_found=0
    input_found=0
    number_tries_dis=0
    while [[ disjunction_found -ne "1" ]]
    do
        echo $disjunction_found
        touch $result_folder\/results.txt
        python z3_parsing.py $result_folder >> $result_folder/results.txt
        python disjunction_result_analysis.py $result_folder "PROBABILITY"

        if [ $? != 0 ];
        then
            disjunction_found=1
            echo "BUG FOUND DISJUNCTION \n"
        fi
        number_tries_dis=$(( number_tries_dis+ 1 ))
    done

    number_tries_input=0
    echo "INPUT METHOD"
    while [[ input_found -ne "1" ]]
    do
        rm $result_folder/results_input.txt
        echo $number_tries_input
        echo $input_found
        #Run input generation oracle and time it
        INPUT=$(python input_generation.py $FILE $assembly_file); 

        #Getting the name of the symbolic variables and modify the query file
        for RESULT in $result_folder/*.smt2; 
        do 
            if [[ $RESULT != *_modified.smt2 ]]
            then
                python file_modification_probability.py $RESULT "${INPUT}";
                stp/build/stp $RESULT >> $result_folder/results_input.txt;
            fi
        done

        #Analyse the results
        python result_analysis.py $result_folder "PROBABILITY"
        if [ $? != 0 ];
        then
            input_found=1
            echo "BUG FOUND INPUT"
        fi
        number_tries_input=$(( number_tries_input+ 1 ))
    done

    echo $number_tries_dis
    echo $number_tries_input

done