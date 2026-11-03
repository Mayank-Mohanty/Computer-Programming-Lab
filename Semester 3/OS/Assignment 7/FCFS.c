#include <stdio.h>
struct Process {
    int pid;
    int at;
    int bt;
    int ct;
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
    int current_time = 0;
    for (int i = 0; i < n; i++) {
        if (current_time < p[i].at) {
            current_time = p[i].at;
        }
        p[i].ct = current_time + p[i].bt;
        p[i].tat = p[i].ct - p[i].at;
        p[i].wt = p[i].tat - p[i].bt;
        current_time = p[i].ct;
        total_tat += p[i].tat;
        total_wt += p[i].wt;
    }
    printf("\nPID\tAT\tBT\tCT\tTAT\tWT\n");
    for (int i = 0; i < n; i++) {
        printf("%d\t%d\t%d\t%d\t%d\t%d\n", p[i].pid, p[i].at, p[i].bt, p[i].ct, p[i].tat, p[i].wt);
    }
    printf("\nAverage Turnaround Time: %.2f", total_tat / n);
    printf("\nAverage Waiting Time: %.2f\n", total_wt / n);
    return 0;
}
