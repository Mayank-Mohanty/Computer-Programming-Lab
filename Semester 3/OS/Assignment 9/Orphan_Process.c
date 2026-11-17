#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
int main()
{
    pid_t pid = fork();
    if (pid == 0)
    {
        sleep(5);
        printf("Child Process\n");
        printf("Child PID: %d\n", getpid());
        printf("New Parent PID: %d\n", getppid());
    }
    else if (pid > 0)
    {
        printf("Parent Process Terminated\n");
        exit(0);
    }
    return 0;
}

