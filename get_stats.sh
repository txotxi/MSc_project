#Gets the statistics from the klee runs in a csv format

#!bin/sh
for FOLDER in klee_local/results/*
do
    if ! [[ $FOLDER == klee_local/results/csmith_file_* ]];
    then

        rm csv_files/tests.csv
        ./klee_local/klee/build/bin/klee-stats --to-csv --print-all $FOLDER >> csv_files/tests.csv
        #Modify the results to get only the last line
        python modify_stats.py csv_files/coreutils_stats.csv csv_files/tests.csv

        #Getting the number of paths explored
        num_smt2=$(find $FOLDER -name "*.smt2" | wc -l)
        echo $num_smt2 >> paths_explored.txt
    fi
    
done