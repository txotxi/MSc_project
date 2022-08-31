This repository contains the code developped for the project "Who finds the bugs in the bug finders ?"

These files can be launched to reproduce the experiments described in the project report.

In order to set up the directory properly, a folder containing the Klee source code should be placed in the "klee_local" folder.
The files in the csmith folders can be placed in the experiments folder in the "klee_local" directory.

The bash scripts contain everything to automatically run the experiments.

In the case of the unique_run.sh and unique_run_input.sh scripts, it is necessary to indicate in the script which file is the target of the run.

The python files are automatically called by the bash scripts and do not need to be used independently.

In the case where a bug is detected by the oracle, the name of the c file will appear in a problems.txt file, and the files resulting from the execution of KLEE will be saved in the problematic_examples_folder