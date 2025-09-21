/*Input a number and check if its +ve, -ve or zero by using nested if-else.
Mayank Mohanty 25BCSG88 Section A1 Roll No.11*/
#include<stdio.h>
int main()
{
    int num;
    printf("\nEnter a number: ");
    scanf("%d",&num);
    if (num>=0)
        if (num>0)
            printf("\n%d is positive",num);
        else
            printf("\n%d is zero",num);
    else
        printf("\n%d is negative",num);
    return 0;
}