/*Print the upper and lower triangular matrixes.
Mayank Mohanty 25BCSG88 Section A1 Roll No.11*/
#include<stdio.h>
int main()
{
    int A[10][10],n,i,j;
    printf("\nEnter order of square matrix: ");
    scanf("%d",&n);
    printf("\nEnter elements:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            scanf("%d",&A[i][j]);
    }
    printf("\nUpper triangular matrix:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i<=j)
                printf("%d ",A[i][j]);
            else
                printf("0 ");
        }
        printf("\n");
    }
    printf("\nLower triangular matrix:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i>=j)
                printf("%d ",A[i][j]);
            else
                printf("0 ");
        }
        printf("\n");
    }
    return 0;
}