#Times the running time of the two different exhaustiveness
#oracle methods
#!/bin/sh

for file_number in {1..200}
do
    rm time_measures/time_dis.txt
    rm time_measures/time_inp.txt

    #The number of symbolic variables in the files under test.
    #Each set of files is in a different folder
    #Files were created for 2,3,4,5,10 an 15 symbolic variables
    sym_var_num=15
    FILE=klee_local/experiments/csmith_files_${sym_var_num}_sym_var/csmith_file_$file_number.c
    file_name=${FILE/klee_local\/experiments\/csmith_files_${sym_var_num}_sym_var}
    no_extension=${FILE/.c}
    folder_name=${no_extension/klee_local\/experiments\/csmith_files_${sym_var_num}_sym_var\/}
    result_folder=klee_local\/results\/$folder_name
    llvm_file=${FILE/.c/.bc}
    assembly_file=$result_folder/assembly.ll

    echo $FILE
    echo $result_folder

    #Run klee on the file
    clang-9 -I klee_local/klee/include -I csmith-2.3.0/runtime -fno-discard-value-names -emit-llvm -c -g -O0 -Xclang -disable-O0-optnone $FILE -Wno-everything -o $llvm_file

    rm -rf $result_folder

    ./klee_local/klee/build/bin/klee --write-smt2s --write-kqueries --emit-all-errors --max-time=1min --watchdog --output-dir=$result_folder $llvm_file

    #Get number of paths/number of ktest (to check if it was stopped properly or not)
    num_smt2=$(find $result_folder -name "*.smt2" | wc -l)
    num_ktest=$(find $result_folder -name "*.ktest" | wc -l)

    #Run disjunction oracle on the result (since it does not modify the files) and time it
    touch $result_folder\/results.txt
    { time ( python z3_parsing.py $result_folder >> $result_folder/results.txt;
    python disjunction_result_analysis.py $result_folder 'oracle_comparison_disjunction' ) } 2>> time_measures/time_dis.txt

    if [ $? != 0 ];
    then
        dir_name="problematic_examples/bug_dis_$bugs";
        mkdir $dir_name
        #Save the files
        cp $FILE $dir_name
        cp $result_folder/*.smt2 $dir_name
        bugs=$(( bugs+ 1 )) 
    fi

    #Run input generation oracle and time it
    { time ( INPUT=$(python input_generation.py $FILE $assembly_file); 

    #Getting the name of the symbolic variables and modify the query file
    for RESULT in $result_folder/*.smt2; 
    do 
        python file_modification.py $RESULT "${INPUT}";
        stp/build/stp $RESULT >> $result_folder/results.txt;
    done

    #Analyse the results
    python result_analysis.py $result_folder 'oracle_comparison_input' ) } 2>> time_measures/time_inp.txt
    if [ $? != 0 ];
    then
        dir_name="problematic_examples/bug_inp_$bugs"
        mkdir $dir_name
        #Save the files
        cp $FILE $dir_name
        cp $result_folder/*.smt2 $dir_name
        bugs=$(( bugs+ 1 )) 
        echo $INPUT >> $dir_name/input.txt
    fi

    #Get all of the information in the result file
    python time_stats.py $FILE $num_smt2 $num_ktest $sym_var_num

done