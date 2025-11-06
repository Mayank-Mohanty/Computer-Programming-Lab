/*Input two matrixes and do their addition after checking suitable condition.
Mayank Mohanty 25BCSG88 Section A1 Roll No.11*/
#include<stdio.h>
int main ()
{
    int A[10][10],B[10][10],C[10][10],i,j,r1,r2,c1,c2;
    printf("\nEnter rows and columns of first matrix: ");
    scanf("%d%d",&r1,&c1);
    printf("\nEnter rows and columns of second matrix: ");
    scanf("%d%d",&r2,&c2);
    if(r1==r2&&c1==c2)
    {
        printf("\nEnter elements of first matrix:\n");
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c1;j++)
                scanf("%d",&A[i][j]);
        }
        printf("\nEnter elements of second matrix:\n");
        for(i=0;i<r2;i++)
        {
            for(j=0;j<c2;j++)
                scanf("%d",&B[i][j]);
        }
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c1;j++)
                C[i][j]=A[i][j]+B[i][j];
        }
        printf("\nResultant matrix:\n");
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c1;j++)
                printf("%d ",C[i][j]);
            printf("\n");
        }
    }
    else
        printf("\nMatrix addition not possible");
    return 0;
}