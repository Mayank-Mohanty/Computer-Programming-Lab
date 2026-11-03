/*Create a process to find the factorial of a number in child section and to check a number for even or odd in parent section.
 Mayank Mohanty 25BCSG88 D1 18*/
#include<stdio.h>
#include<unistd.h>
int main()
{
    int n, check;
    long long fact = 1;
    printf("Enter a number: ");
    scanf("%d", &n);
    check = fork();
    if (check == 0)
    {
        printf("\nChild Process Information:\n");
        for (int i = 1; i <= n; i++) {
            fact *= i;
        }
        printf("\t->Factorial of %d is %lld\n", n, fact);
    }
    else if (check > 0)
    {
        sleep(1); // Forces parent to wait so the child output prints first
        printf("Parent Process Information:\n");
        if (n % 2 == 0)
            printf("\t->%d is Even\n", n);
        else
            printf("\t->%d is Odd\n", n);
    } 
    return 0;
}

