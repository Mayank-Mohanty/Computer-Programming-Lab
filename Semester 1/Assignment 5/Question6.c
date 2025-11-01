/*Input a number and check whether armstrong number or not.
Mayank Mohanty 25BCSG88 Section A1 Roll No.11*/
#include<stdio.h>
#include<math.h>
int main()
{
    int num,n,rem,d=0,sum=0;
    printf("\nEnter a number: ");
    scanf("%d",&n);
    num=n;
    while (n!=0)
    {
        d++;
        n/=10;
    }
    n=num;
    while (n!=0)
    {
        rem=n%10;
        sum+=pow(rem,d);
        n/=10;
    }
    if (num==sum)
        printf("\n%d is an Armstrong number",num);
    else
        printf("\n%d is not an Armstrong number",num);
    return 0;
}