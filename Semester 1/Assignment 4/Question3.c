/*Print numbers between m and n inputted by user.
Mayank Mohanty 25BCSG88 Section A1 Roll No.11*/
#include<stdio.h>
int main()
{
    int m,n;
    printf("\nEnter start and end value: ");
    scanf("%d%d",&m,&n);
    while (m<n-1)
    {
        printf("%d ",m+1);
        m++;
    }
    return 0;
}