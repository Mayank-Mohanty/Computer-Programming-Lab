/*Input a matrixes and transpose it.
Mayank Mohanty 25BCSG88 Section A1 Roll No.11*/
#include<stdio.h>
int main()
{
    int A[10][10],B[10][10],i,j,r,c;
    printf("\nEnter row and column of matrix: ");
    scanf("%d%d",&r,&c);
    printf("\nEnter array elements:\n");
    for (i=0;i<r;i++)
    {
        for (j=0;j<c;j++)
            scanf("%d",&A[i][j]);
    }
    for (i=0;i<r;i++)
    {
        for (j=0;j<c;j++)
            B[i][j]=A[j][i];
    }
    printf("\nMatrix transpose:\n");
    for (i=0;i<r;i++)
    {
        for (j=0;j<c;j++)
            printf("%d ",B[i][j]);
        printf("\n");
    }
    return 0;
}