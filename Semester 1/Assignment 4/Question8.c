/*Find GCD of two numbers inputted by user.
Mayank Mohanty 25BCSG88 Section A1 Roll No.11*/
#include<stdio.h>
int main()
{
    int num1,num2,r;
    printf("\nEnter two number: ");
    scanf("%d%d",&num1,&num2);
    while (num2>0)
    {
        r=num1%num2;
        num1=num2;
        num2=r;
    }
    printf("\nGCD=%d",num1);
    return 0;
}