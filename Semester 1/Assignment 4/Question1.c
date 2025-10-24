/*Print the numbers from 1 to n, take n from user.
Mayank Mohanty 25BCSG88 Section A1 Roll No.11*/
#include<stdio.h>
int main()
{
    int i=1,n;
    printf("\nEnter end value: ");
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        printf("%d ",i);
    }
    return 0;
}