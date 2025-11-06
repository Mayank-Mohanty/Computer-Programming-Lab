/*Read a 2D array and display in matrix format.
Mayank Mohanty 25BCSG88 Section A1 Roll No.11*/
#include<stdio.h>
int main()
{
    int a[10][10],i,j,x,y;
    printf("\nEnter number of rows and columns: ");
    scanf("%d%d",&x,&y);
    for (i=0;i<x;i++)
    {
        for (j=0;j<y;j++)
        {
            printf("\nEnter element at %dx%d: ",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }
    printf("\nThe array is:\n");
    for (i=0;i<x;i++)
    {
        for (j=0;j<y;j++)
            printf("%d ",a[i][j]);
        printf("\n");
    }
    return 0;
}