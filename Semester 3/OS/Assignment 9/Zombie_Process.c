#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
int main()
{
    pid_t pid = fork();
    if (pid == 0)
    {
        printf("Child Process Terminated\n");
        exit(0);
    }
    else if (pid > 0)
    {
        printf("Parent Process Running\n");
        sleep(10);
        printf("Parent Process Terminated\n");
    }
    return 0;
}

