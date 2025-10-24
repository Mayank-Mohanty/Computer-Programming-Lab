/*Print sum and avg of numbers from 1 to n, n inputted by user.
Mayank Mohanty 25BCSG88 Section A1 Roll No.11*/
#include<stdio.h>
int main()
{
    int i=1,n;
    float sum=0,avg;
    printf("\nEnter end value: ");
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        sum+=i;
    }
    avg=sum/n;
    printf("\nSum=%.2f Avg=%.2f",sum,avg);
    return 0;
}