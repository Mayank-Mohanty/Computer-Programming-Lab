/*Mayank Mohanty 25BCSG88 D1 18*/
#include<stdio.h>
#include<unistd.h>
int main()
{
    int check = fork();    
    if (check == 0)
    {
        sleep(1); // Pauses child so parent sequence prints uninterrupted first
        printf("child starts\n");
        for (int i = 1; i <= 10; i++) {
            printf("%d ", i);
        }
        printf("\nchild ends\n");
    }
    else if (check > 0)
    {
        printf("parent starts\n");
        for (int i = 1; i <= 10; i++) {
            printf("%d ", i);
        }
        printf("\nparent ends\n");
	    sleep(2); // Keeps the parent alive so the terminal prompt doesn't return early
    }
    return 0;
}

