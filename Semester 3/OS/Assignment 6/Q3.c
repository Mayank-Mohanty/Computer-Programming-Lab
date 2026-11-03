/*Create a process to find the fabonacci series in the child and to find the sum of n number in parent section.
 Mayank Mohanty 25BCSG88 D1 18*/
#include<stdio.h>
#include<unistd.h>
int main()
{
    int n, check;
    int a = 0, b = 1, next;
    printf("Enter number of terms (n): ");
    scanf("%d", &n);
    check = fork();
    if (check == 0)
    {
        printf("\nChild starts\n");
        printf("Fibonacci series: ");
        for (int i = 1; i <= n; i++) {
            printf("%d ", a);
            next = a + b;
            a = b;
            b = next;
        }
        printf("\nChild ends\n");
    }
    else if (check > 0)
    {
        sleep(1); // Forces parent to wait so the child finishes its sequence
        int sum = n * (n + 1) / 2;
        printf("Parent starts\n");
        printf("Sum of %d numbers = %d\n", n, sum);
        printf("Parent ends\n");
    }    
    return 0;
}

