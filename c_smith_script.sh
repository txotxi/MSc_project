#This script creates a csmith program, modifies it so that it matches the klee format,
#then launches klee with that program and saves the program if more than 30 paths were
#explored by KLEE.

#!/bin/sh

cd ~
cd /mnt/c/Users/loupa/Documents/ICL/Individual_Project/

rm -rf problematic_examples
mkdir problematic_examples
rm problems.txt
rm test_stats.txt

#Counts the number of bugs found during the execution of the script
bugs=0
#Number of already generated csmith files
csmith_number=0
while true
do
    #rm test.txt

    csmith > klee_local/experiments/csmith_test/csmith.c

    gcc -I csmith-2.3.0/runtime -o klee_local/experiments/csmith_test/csmith klee_local/experiments/csmith_test/csmith.c

    timeout 2s ./klee_local/experiments/csmith_test/csmith

    #The exit code for timeout is 124 if the program timed out
    if [[ $? != 124 ]];
    then
        #Converting it to a klee-compatible program
        echo "Converting program"
        python convert_csmith.py klee_local/experiments/csmith_test/csmith.c 8

        #Using Klee on the program to get the smt files
        echo "Running Klee"

        clang-9 -I klee_local/klee/include -I csmith-2.3.0/runtime -fno-discard-value-names -emit-llvm -c -g -O0 -Xclang -disable-O0-optnone klee_local/experiments/csmith_test/csmith.c -Wno-everything -o klee_local/experiments/csmith_test/csmith.bc
        rm -rf klee_local/results/csmith_test
        ./klee_local/klee/build/bin/klee --write-smt2s --write-kqueries --emit-all-errors --max-time=1min --watchdog --output-dir=klee_local/results/csmith_test klee_local/experiments/csmith_test/csmith.bc

        num_path=$(find klee_local/results/csmith_test/ -name "*.ktest" | wc -l)
        echo $num_path
        if [[ $num_path -ge 30 ]];
        then
            #Save the file 
            file_name="csmith_file_$csmith_number.c"
            cp klee_local/experiments/csmith_test/csmith.c csmith_files/$file_name
            csmith_number=$(( csmith_number + 1 )) 
        fi
    fi

    

done
