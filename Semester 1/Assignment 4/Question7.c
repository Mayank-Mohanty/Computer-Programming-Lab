/*Find factorial of a number inputted by user.
Mayank Mohanty 25BCSG88 Section A1 Roll No.11*/
#include<stdio.h>
int main()
{
    int num,fact=1;
    printf("\nEnter number: ");
    scanf("%d",&num);
    while (num>0)
    {
        fact*=num;
        num--;
    }
    printf("\nFactorial=%d",fact);
    return 0;
}