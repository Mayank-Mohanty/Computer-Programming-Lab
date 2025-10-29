/*Print the pattern for n=4,
0
1 0
2 1 0
3 2 1 0
Mayank Mohanty 25BCSG88 Section A1 Roll No.11*/
#include<stdio.h>
int main()
{
    int i,j,n;
    printf("\nEnter no. of rows: ");
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        for (j=i;j>=0;j--)
            printf("%d ",j);
        printf("\n");
    }
    return 0;
}