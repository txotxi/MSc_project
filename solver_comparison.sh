#Times the running of the two oracles to compare their performances

#!/bin/sh

cd ~
cd /mnt/c/Users/loupa/Documents/ICL/Individual_Project/

for file_number in {1..200}
do 
    rm poubelle.txt
    #dis=stp
    #inp=z3
    rm time_measures/time_dis.txt
    rm time_measures/time_inp.txt

    #Run the Klee program

    #The number of symbolic variables in the files under test.
    #Each set of files is in a different folder
    #Files were created for 2,3,4,5,10 an 15 symbolic variables
    sym_var_num=10
    FILE=klee_local/experiments/csmith_files_${sym_var_num}_sym_var/csmith_file_$file_number.c
    file_name=${FILE/klee_local\/experiments\/csmith_files_${sym_var_num}_sym_var}
    no_extension=${FILE/.c}
    folder_name=${no_extension/klee_local\/experiments\/csmith_files_${sym_var_num}_sym_var\/}
    result_folder=klee_local\/results\/$folder_name
    llvm_file=${FILE/.c/.bc}
    assembly_file=$result_folder/assembly.ll

    echo $FILE
    echo $result_folder

    clang-9 -I klee_local/klee/include -I csmith-2.3.0/runtime -fno-discard-value-names -emit-llvm -c -g -O0 -Xclang -disable-O0-optnone $FILE -Wno-everything -o $llvm_file

    rm -rf $result_folder

    ./klee_local/klee/build/bin/klee --write-smt2s --write-kqueries --emit-all-errors --max-time=30s --max-tests=100 --output-dir=$result_folder $llvm_file

    num_smt2=$(find $result_folder -name "*.smt2" | wc -l)
    num_ktest=$(find $result_folder -name "*.ktest" | wc -l)
    #Generate the random input
    INPUT=$(python input_generation.py $FILE $assembly_file)

    #Getting the name of the symbolic variables and modify the query file
    for RESULT in $result_folder/*.smt2; 
    do 
        python file_modification.py $RESULT "${INPUT}"; 
        #Getting time only
        { time stp/build/stp $RESULT 2> poubelle.txt ; } 2>> time_measures/time_dis.txt;
        { time z3 $RESULT 2> poubelle.txt ; } 2>> time_measures/time_inp.txt;
    done

    python time_stats.py $FILE $num_smt2 $num_ktest $sym_var_num
done

echo Number of tests : $num_test_total
