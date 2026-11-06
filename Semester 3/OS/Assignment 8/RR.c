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
    int n, TQ;
    printf("Enter the number of processes: ");
    scanf("%d", &n);    
    struct Process p[n], temp;
    float total_wt = 0, total_tat = 0;    
    for (int i = 0; i < n; i++) {
        printf("Enter PID, AT, and BT for process %d: ", i + 1);
        scanf("%d %d %d", &p[i].pid, &p[i].at, &p[i].bt);
        p[i].rt = p[i].bt;
    }
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (p[j].at > p[j + 1].at) {
                temp = p[j];
                p[j] = p[j + 1];
                p[j + 1] = temp;
            }
        }
    }
    printf("Enter Time Quantum: ");
    scanf("%d", &TQ);
    int time = 0, completed = 0;
    while (completed < n) {
        int process_executed = 0;
        for (int i = 0; i < n; i++) {
            if (p[i].rt > 0 && p[i].at <= time) {
                process_executed = 1; 
                if (p[i].rt > TQ) {
                    time += TQ;
                    p[i].rt -= TQ;
                } else {
                    time += p[i].rt;
                    p[i].rt = 0;
                    p[i].ct = time;
                    p[i].tat = p[i].ct - p[i].at;
                    p[i].wt = p[i].tat - p[i].bt;
                    total_tat += p[i].tat;
                    total_wt += p[i].wt;
                    completed += 1;
                }
            }
        }
        if (process_executed == 0) {
            time++;
        }
    }
    printf("\nPID\tAT\tBT\tCT\tTAT\tWT\n");
    for (int i = 0; i < n; i++) {
        printf("%d\t%d\t%d\t%d\t%d\t%d\n", p[i].pid, p[i].at, p[i].bt, p[i].ct, p[i].tat, p[i].wt);
    }
    printf("Average Turnaround Time: %f\n", total_tat/n);
    printf("Average Waiting Time: %f\n", total_wt/n);    
    return 0;
}
