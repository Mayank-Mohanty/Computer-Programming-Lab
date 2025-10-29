/*Sum=1+1/2!+1/3!+...+1/n!.
Mayank Mohanty 25BCSG88 Section A1 Roll No.11*/
#include<stdio.h>
int main()
{
    int i,n;
    float sum=0,term=1;
    printf("\nEnter number: ");
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        term*=(float)1/i;
        sum+=term;
    }
    printf("\nSum=%f",sum);
    return 0;
}