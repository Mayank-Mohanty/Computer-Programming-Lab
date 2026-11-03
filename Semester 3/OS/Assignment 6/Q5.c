/*Mayank Mohanty 25BCSG88 D1 18*/
#include<stdio.h>
#include<unistd.h>
int main()
{
    int check = fork();
    if (check == 0)
    {
        printf("child starts\n");
        for (int i = 1; i <= 10; i++) {
            printf("%d ", i);
        }
        printf("\nchild ends\n");
    }
    else if (check > 0)
    {
        sleep(1); // Pauses parent so child sequence prints uninterrupted
        printf("parent starts\n");
        for (int i = 1; i <= 10; i++) {
            printf("%d ", i);
        }
        printf("\nparent ends\n");
    }    
    return 0;
}

