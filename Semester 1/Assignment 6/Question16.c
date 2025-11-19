/*Interchange any two rows/columns of a matrix.
Mayank Mohanty 25BCSG88 Section A1 Roll No.11*/
#include<stdio.h>
int main()
{
    int A[10][10],m,n,i,j,r1,r2,c1,c2,temp,ch;
    printf("\nEnter number of rows and columns: ");
    scanf("%d%d",&m,&n);
    printf("\nEnter elements:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
            scanf("%d",&A[i][j]);
    }
    printf("\n1. Interchange Rows\n2. Interchange Columns\nEnter choice: ");
    scanf("%d",&ch);
    if(ch==1)
    {
        printf("\nEnter two rows to interchange: ");
        scanf("%d%d",&r1,&r2);
        r1--; r2--;
        for(j=0;j<n;j++)
        {
            temp=A[r1][j];
            A[r1][j]=A[r2][j];
            A[r2][j]=temp;
        }
    }
    else if(ch==2)
    {
        printf("\nEnter two columns to interchange: ");
        scanf("%d%d",&c1,&c2);
        c1--; c2--;
        for(i=0;i<m;i++)
        {
            temp=A[i][c1];
            A[i][c1]=A[i][c2];
            A[i][c2]=temp;
        }
    }
    printf("\nMatrix after interchange:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
            printf("%d ",A[i][j]);
        printf("\n");
    }
    return 0;
}
