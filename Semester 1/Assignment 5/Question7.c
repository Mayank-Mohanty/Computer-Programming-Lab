/*Print prime numbers between m and n.
Mayank Mohanty 25BCSG88 Section A1 Roll No.11*/
#include<stdio.h>
#include<math.h>
int main()
{
    int i,j,m,n,flag=0;
    printf("\nEnter start and end value: ");
    scanf("%d%d",&m,&n);
    printf("\nPrime numbers between %d and %d: ",m,n);
    for (i=m+1;i<n;i++)
    {
        for (j=2;j<=sqrt(i);j++)
        {
            if (i%j==0)
            {
                flag=1;
                break;
            }
        }
        if (flag==0)
            printf("%d ",i);
        flag=0;
    }
    return 0;
}