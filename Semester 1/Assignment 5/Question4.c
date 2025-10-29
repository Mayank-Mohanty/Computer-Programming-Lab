/*Print the pattern for n=4,
1
1 2
1 2 3
1 2 3 4
Mayank Mohanty 25BCSG88 Section A1 Roll No.11*/
#include<stdio.h>
int main()
{
    int i,j,n;
    printf("\nEnter no. of rows: ");
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        for (j=1;j<=i;j++)
            printf("%d ",j);
        printf("\n");
    }
    return 0;
}