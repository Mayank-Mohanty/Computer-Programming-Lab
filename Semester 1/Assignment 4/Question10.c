/*Input a number and compute sum of its digits.
Mayank Mohanty 25BCSG88 Section A1 Roll No.11*/
#include<stdio.h>
int main()
{
    int num,rem,sum=0;
    printf("\nEnter number: ");
    scanf("%d",&num);
    while (num!=0)
    {
        rem=num%10;
        sum+=rem;
        num/=10;
    }
    printf("\nSum of digits=%d",sum);
    return 0;
}