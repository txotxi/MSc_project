#Analyses the results given by the solver to check if one of the paths is satisfiable
import sys

if __name__=='__main__':
    results_file = open(sys.argv[1]+"/results.txt","r")
    results_lines = results_file.readlines()

    valid_queries = 0
    for l in results_lines:
        if ("sat" in l and "unsat" not in l):
            valid_queries +=1
    if (valid_queries <1):
        #Take note of the test which caused the problem in the problems.txt file
        problems_file =open("problems.txt","a")
        problems_file.writelines(sys.argv[1]+' '+sys.argv[2]+'\n')
        problems_file.close()
        sys.exit(1)