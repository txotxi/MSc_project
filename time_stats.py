#Writes the average time for each method to a file
import sys

def get_time(lines,filename):
    #Returns average time for the file
    time_counter = 0
    time_list=[]
    for i in range(len(lines)):
        l=lines[i]
        if (filename in l) and i!=0:
            time_list.append(time_counter)
            time_counter = 0
        elif "real" in l:
            time = l.split("\t")[-1][0:-1]
            minutes=float(time.split('m')[0])
            seconds=float(time.split('m')[1][0:-1])
            total_time=seconds+(minutes*60)
            time_counter+=total_time
    time_list.append(time_counter)
    return sum(time_list) / len(time_list)

if __name__=='__main__':
    #sys.argv[1] : name of the c file Klee was executed on
    #sys.argv[2] : number of smt2 files
    #sys.argv[3] : number of ktest files
    #sys.argv[4] : number of symbolic arguments
    time_file_dis=open('time_measures/time_dis.txt',"r")
    lines_dis=time_file_dis.readlines()
    time_file_dis.close()

    time_file_inp=open('time_measures/time_inp.txt','r')
    lines_inp=time_file_inp.readlines()
    time_file_inp.close()

    avg_time_dis = get_time(lines_dis,sys.argv[1])
    avg_time_inp = get_time(lines_inp,sys.argv[1])
    line=sys.argv[1]+' dis '+str(avg_time_dis)+' inp '+str(avg_time_inp)+' smt2 '+str(sys.argv[2])+' ktest '+str(sys.argv[3])+' sym_args '+str(sys.argv[4])+'\n'

    stats_file=open("time_measures/time_stats.txt","a")
    stats_file.writelines(line)
    stats_file.close()

