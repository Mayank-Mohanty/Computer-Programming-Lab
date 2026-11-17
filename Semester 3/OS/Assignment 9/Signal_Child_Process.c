//Create a process that will generate the signal by parent process when child process dies.
#include <stdio.h>
#include <unistd.h>
#include <signal.h>
void abc(int sig);
int pid, I;
int main() {
    pid = fork();
    if (pid == 0) {
        // Child process sleeps for 5 seconds and then terminates
        sleep(5);
    }
    else {
        // Parent process registers SIGCHLD handler
        signal(SIGCHLD, abc);
        for (I = 0; I < 100; I++) {
            printf("%d ", I);
            fflush(stdout);
            sleep(1);
        }
        printf("Parent Exiting\n");
    }
    return 0;
}
void abc(int sig) {
    printf("\nid %d ", I);
    printf("Child Died\n");
    getchar(); // Pauses until Enter is pressed
}
