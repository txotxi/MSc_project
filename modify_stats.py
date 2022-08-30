#Keeps only the last line of the result of klee-test stats and
#writes it to the definitive stats file
import os
import z3
import sys
import re

def overwrite_file(file,lines):
    file.seek(0)
    file.truncate()
    file.writelines(lines)

if __name__=='__main__':
    stats_file = open(sys.argv[1],"a")
    tmp_file = open(sys.argv[2],"r")
    tmp_lines = tmp_file.readlines()
    new_lines=[tmp_lines[-1]]
    stats_file.writelines(new_lines)
    stats_file.close()
    tmp_file.close()
