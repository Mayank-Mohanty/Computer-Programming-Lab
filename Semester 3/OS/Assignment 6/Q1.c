/*Create a process to show the id and parent id of child and parent process.
 Mayank Mohanty 25BCSG88 D1 18*/
#include<stdio.h>
#include<unistd.h>
int main()
{
    int pid, ppid, check;
    ppid = getppid();
    pid = getpid();
    check = fork();    
    if (check == 0)
    {
        printf("\nChild Process Information:\n");
        ppid = getppid();
        pid = getpid();
        printf("\t->Parent Process ID=%d\n", ppid);
        printf("\t->Process Own ID=%d\n", pid);
    }
    else if (check > 0)
    {
        sleep(1); // Forces parent to wait so the child doesn't become an orphan
        printf("Parent Process Information:\n");
        printf("\t->Parent Process ID=%d\n", ppid);
        printf("\t->Process Own ID=%d\n", pid);
    }    
    return 0;
}
