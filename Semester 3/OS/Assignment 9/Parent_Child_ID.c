//Create a process that will show the id and parent id of parent and child process by allowing the process to sleep.
#include <stdio.h>
#include <unistd.h>
#include <signal.h>
int main() {
    int pid, ppid, check;
    ppid = getppid();
    pid = getpid();
    check = fork();
    if (check == 0) {
        sleep(5);
        printf("\nChild Process Information:\n");
        ppid = getppid();
        pid = getpid();
        printf("\t->Parent Process ID = %d\n", ppid);
        printf("\t->Process Own ID = %d\n", pid);
    }
    else {
        printf("\nParent Process Information:\n");
        printf("\t->Parent Process ID = %d\n", ppid);
        printf("\t->Process Own ID = %d\n", pid);
    }
    return 0;
}
