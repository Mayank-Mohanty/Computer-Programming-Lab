/*Input a number and reverse it.
Mayank Mohanty 25BCSG88 Section A1 Roll No.11*/
#include<stdio.h>
int main()
{
    int n,num,rem,rev=0;
    printf("\nEnter number: ");
    scanf("%d",&num);
    n=num;
    while (num!=0)
    {
        rem=num%10;
        rev=rev*10+rem;
        num/=10;
    }
    if (n==rev)
        printf("\n%d is a palindrome",n);
    else
        printf("\n%d is not a palindrome",n);
    return 0;
}