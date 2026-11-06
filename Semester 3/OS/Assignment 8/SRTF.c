#include<stdio.h>
struct Process {
    int pid;
    int at;
    int bt;
    int ct;
    int rt;
    int tat;
    int wt;
};
int main() {
    int n;
    printf("Enter the number of processes: ");
    scanf("%d", &n);
    struct Process p[n], temp;
    float total_wt = 0, total_tat = 0;
    for (int i = 0; i < n; i++) {
        printf("Enter PID, AT, and BT for process %d: ", i + 1);
        scanf("%d %d %d", &p[i].pid, &p[i].at, &p[i].bt);
	p[i].rt=p[i].bt;
    }
    int time = 0, completed = 0, shortest;
    while (completed < n) {
	    shortest = -1;
	    int min_rt = 9999999;
	    for (int i = 0; i < n; i++) {
		    if (p[i].at <= time && p[i].rt > 0) {
			    if (p[i].rt < min_rt) {
				    min_rt = p[i].rt;
				    shortest = i;
			    }
		    }
	    }
	    if (shortest == -1)
		    time += 1;
	    else{
		    p[shortest].rt -= 1;
		    time += 1;
		    if (p[shortest].rt == 0){
			    completed += 1;
			    p[shortest].ct = time;
			    p[shortest].tat = p[shortest].ct - p[shortest].at;
			    p[shortest].wt = p[shortest].tat - p[shortest].bt;
		    }
	    }
    }
    for (int i = 0; i < n; i++){
	    total_tat += p[i].tat;
	    total_wt += p[i].wt;
    }
    printf("\nPID\tAT\tBT\tCT\tTAT\tWT\n");
    for (int i = 0; i < n; i++) {
        printf("%d\t%d\t%d\t%d\t%d\t%d\n", p[i].pid, p[i].at, p[i].bt, p[i].ct, p[i].tat, p[i].wt);
    }
    printf("Average Turnaround Time: %f\n", total_tat/n);
    printf("Average Waiting Time: %f\n", total_wt/n);
    return 0;
}

