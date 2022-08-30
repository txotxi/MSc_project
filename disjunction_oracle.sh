#Runs the disjunction oracle on the test suite

#!/bin/sh

#At this moment, the experiments were still running in a docker container
klee="docker run --name klee-exp --net=host --rm -ti --ulimit="stack=-1:-1" -v /mnt/c/users/loupa/Documents/ICL/Individual_Project/Klee/klee:/tmp/klee_src -v /mnt/c/users/loupa/Documents/ICL/Individual_Project/Klee/experiments:/tmp/experiments -v /mnt/c/users/loupa/Documents/ICL/Individual_Project/Klee/results:/tmp/results/ -v /mnt/c/users/loupa/Documents/ICL/Individual_Project/Klee/klee_build:/tmp/klee_build/ -v /mnt/c/users/loupa/Documents/ICL/Individual_Project/Klee/csmith-2.3.0:/tmp/csmith-2.3.0 kleedev/klee-70024"

cd ~
cd /mnt/c/Users/loupa/Documents/ICL/Individual_Project/

bugs=0
num_test_total=0

rm -rf problematic_examples
mkdir problematic_examples
rm problems.txt
rm test_stats.txt

for FILE in Klee/experiments/test_suite/*.c
do 
    #FILE='Klee/experiments/test_suite/srem.c'
    echo $FILE;
    #Run the Klee program
    file_name=${FILE/Klee\/experiments\/test_suite\/}
    no_extension=${FILE/.c}
    folder_name=${no_extension/Klee\/experiments\/test_suite\/}
    result_folder=Klee\/results\/$folder_name
    assembly_file=$result_folder\/assembly.ll
    ktest_file=$result_folder\/test000001.ktest

    $klee clang-9 -I /tmp/klee_src/include -fno-discard-value-names -emit-llvm -c -g -O0 -Xclang -disable-O0-optnone /tmp/experiments/test_suite/$file_name -o /tmp/experiments/test_suite/${file_name/.c/.bc};
    $klee rm -rf /tmp/results/$folder_name;
    $klee /tmp/klee_build/bin/klee --write-smt2s --write-kqueries --emit-all-errors --output-dir=/tmp/results/$folder_name /tmp/experiments/test_suite/${file_name/.c/.bc};

    python z3_parsing.py $result_folder >> $result_folder/results.txt

    #Analyse the results
    python disjunction_result_analysis.py $result_folder

    #If the exit code is not 0, save the files
    if [ $? != 0 ];
    then
        dir_name="problematic_examples/bug_$bugs"
        mkdir $dir_name
        #Save the files
        cp $FILE $dir_name
        cp klee/results/$folder_name/*.smt2 $dir_name
        echo $INPUT >> $dir_name/input.txt
        bugs=$(( bugs+ 1 )) 
    fi
    num_test_total=$(( num_test_total + 1 ))
done

echo Number of tests : $num_test_total
echo Number of bugs : $bugs