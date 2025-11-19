/*Find sum of major and minor diagonal elements in a matrix.
Mayank Mohanty 25BCSG88 Section A1 Roll No.11*/
#include<stdio.h>
int main()
{
    int A[10][10],n,i,j,majs=0,mins=0;
    printf("\nEnter order of square matrix (n): ");
    scanf("%d",&n);
    printf("\nEnter matrix elements:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            scanf("%d",&A[i][j]);
    }
    for(i=0;i<n;i++)
    {
        majs += A[i][i];
        mins += A[i][n-1-i];
    }
    printf("\nSum of major diagonal elements= %d",majs);
    printf("\nSum of minor diagonal elements= %d",mins);
    return 0;
}