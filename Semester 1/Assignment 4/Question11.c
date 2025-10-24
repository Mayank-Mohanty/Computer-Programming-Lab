/*Input a number and count the number of digits.
Mayank Mohanty 25BCSG88 Section A1 Roll No.11*/
#include<stdio.h>
int main()
{
    int num,count=0;
    printf("\nEnter number: ");
    scanf("%d",&num);
    while (num!=0)
    {
        num/=10;
        count++;
    }
    printf("\nNumber of digits=%d",count);
    return 0;
}