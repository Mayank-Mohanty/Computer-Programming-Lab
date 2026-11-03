#include <stdio.h>
struct Process {
    int pid;
    int at;
    int bt;
    int ct;
    int tat;
    int wt;
    int completed;
};
int main() {
    int n;  
    printf("Enter the number of processes: ");
    scanf("%d", &n);
    struct Process p[n];
    float total_wt = 0, total_tat = 0;
    // Input PID, AT, BT, and set completed to 0 for each process
    for (int i = 0; i < n; i++) {
        printf("Enter PID, AT, and BT for process %d: ", i + 1);
        scanf("%d %d %d", &p[i].pid, &p[i].at, &p[i].bt);
        p[i].completed = 0;
    }
    // Set time = 0 and completed_count = 0
    int time = 0, completed_count = 0;
    while (completed_count < n) {
        int idx = -1;
        // Find all processes that have arrived and are not yet completed
        for (int i = 0; i < n; i++) {
            if (p[i].at <= time && p[i].completed == 0) {
                // Select the process with the smallest burst time
                if (idx == -1 || p[i].bt < p[idx].bt) {
                    idx = i;
                }
            }
        }
        // If no process has arrived, increment time by 1
        if (idx == -1) {
            time++;
        } else {
            // Execute the selected process completely and calculate metrics
            p[idx].ct = time + p[idx].bt;
            p[idx].tat = p[idx].ct - p[idx].at;
            p[idx].wt = p[idx].tat - p[idx].bt;
            // Update time, mark process as completed, and increment count
            time = p[idx].ct;
            p[idx].completed = 1;
            completed_count++;
            total_tat += p[idx].tat;
            total_wt += p[idx].wt;
        }
    }
    printf("\nPID\tAT\tBT\tCT\tTAT\tWT\n");
    for (int i = 0; i < n; i++) {
        printf("%d\t%d\t%d\t%d\t%d\t%d\n", p[i].pid, p[i].at, p[i].bt, p[i].ct, p[i].tat, p[i].wt);
    }
    printf("\nAverage Turnaround Time: %.2f", total_tat / n);
    printf("\nAverage Waiting Time: %.2f\n", total_wt / n);
    return 0;
}
