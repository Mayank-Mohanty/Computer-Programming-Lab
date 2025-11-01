/*Input a number and check whether perfect number or not.
Mayank Mohanty 25BCSG88 Section A1 Roll No.11*/
#include<stdio.h>
int main()
{
    int i,n,sum=0;
    printf("\nEnter a number: ");
    scanf("%d",&n);
    for (i=1;i<=n/2;i++)
    {
        if (n%i==0)
            sum+=i;
    }
    if (n==sum)
        printf("\n%d is a Perfect number",n);
    else
        printf("\n%d is not a Perfect number",n);
    return 0;
}