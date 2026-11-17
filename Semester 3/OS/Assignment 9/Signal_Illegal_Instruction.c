//Create a process that will generate the signal when illegal instruction is executed.
#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
void abc(int signo);
int main() {
    int i = 0, j = 50;
    signal(SIGFPE, abc);
    j = j / i; // Triggers SIGFPE (divide by zero)
    return 0;
}
void abc(int signo) {
    printf("\nThe Process received a signal %d\n", signo);
    exit(0);
}
