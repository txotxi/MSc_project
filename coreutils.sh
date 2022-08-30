#Runs the disjunction oracle on the coreutils files

#!/bin/sh

cd ~
cd /mnt/c/Users/loupa/Documents/ICL/Individual_Project/

bugs=0

num_test_total=0

for FILE in klee_local/experiments/coreutils_files/*.bc
do
    if ! [[ $FILE == *.o.bc ]];
    then
        echo $FILE;
        
        file_name=${FILE/klee_local\/experiments\/coreutils_files\/}
        no_extension=${FILE/.bc}
        folder_name=${no_extension/klee_local\/experiments\/coreutils_files\/}
        result_folder=klee_local\/results\/$folder_name
        
        rm -rf $result_folder

        echo "RUNNING KLEE"

        ./klee_local/klee/build/bin/klee --write-smt2s --emit-all-errors --libc=uclibc --posix-runtime --output-dir=$result_folder --max-time=2min $FILE --sym-args 0 1 10 --sym-args 0 2 2 --sym-files 1 8 --sym-stdin 8 --sym-stdout

        echo "RUNNING ORACLE"
        python z3_parsing.py $result_folder >> $result_folder/results.txt

        python disjunction_result_analysis.py $result_folder "coreutils"

        if [ $? != 0 ];
        then
            dir_name="problematic_examples/bug_${folder_name}"
            mkdir $dir_name
            #Save the files
            cp $FILE $dir_name
            for RESULT_FILE in $resut_folder/*.smt2;
            do
                cp $result_folder/*.smt2 $dir_name
            done
            cp $result_folder/results.txt $dir_name
        fi
        num_test_total=$(( num_test_total + 1 ))
    fi
done

echo Number of tests : $num_test_total