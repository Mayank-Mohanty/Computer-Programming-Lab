/*Input a 3 digit number and find sum of individual digits.
Mayank Mohanty 25BCSG88 Section A1 Roll No.11*/
#include<stdio.h>
int main()
{
    int num,sum = 0;
    printf("\nEnter a 3-digit number: ");
    scanf("%d",&num);
    sum+=num%10;
    num/=10;
    sum+=num%10;
    num/=10;
    sum+=num%10;
    printf("\nSum of digits=%d",sum);
    return 0;
}