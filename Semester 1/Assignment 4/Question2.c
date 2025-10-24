/*Print multiplication table of an inputted number.
Mayank Mohanty 25BCSG88 Section A1 Roll No.11*/
#include<stdio.h>
int main()
{
    int i=1,n;
    printf("\nMultiplication table of: ");
    scanf("%d",&n);
    for (i=1;i<=10;i++)
    {
        printf("\n%d x %d = %d",n,i,n*i);
    }
    return 0;
}