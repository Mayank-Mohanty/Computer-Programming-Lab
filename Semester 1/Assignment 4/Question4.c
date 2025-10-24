/*Print all even and odd numbers between m and n inputted by user.
Mayank Mohanty 25BCSG88 Section A1 Roll No.11*/
#include<stdio.h>
int main()
{
    int m,n,i;
    printf("\nEnter start and end value: ");
    scanf("%d%d",&m,&n);
    printf("\nEven numbers: ");
    for (i=m+1;i<n;i++)
    {
        if (i%2==0)
            printf("%d ",i);
    }
    printf("\nOdd numbers: ");
    for (i=m+1;i<n;i++)
    {
        if (i%2!=0)
            printf("%d ",i);
    }
    return 0;
}