/*Read an integer arrray and display it.
Mayank Mohanty 25BCSG88 Section A1 Roll No.11*/
#include<stdio.h>
int main()
{
    int i,n;
    printf("\nEnter the number of elements: ");
    scanf("%d",&n);
    int a[n];
    printf("\nEnter array elements: ");
    for (i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("\nThe array elements are: ");
    for (i=0;i<n;i++)
        printf("%d ",a[i]);
    return 0;
}