/*Delete an element in array at a certain position.
Mayank Mohanty 25BCSG88 Section A1 Roll No.11*/
#include <stdio.h>
int main()
{
    int a[100],n,i,pos;
    printf("\nEnter the number of elements: ");
    scanf("%d",&n);
    printf("\nEnter array elements: ");
    for (i=0;i<n;i++) 
        scanf("%d",&a[i]);
    printf("\nEnter the position to delete: ");
    scanf("%d",&pos);
    for(i=pos-1;i<n-1;i++)
        a[i]=a[i+1];
    a[n-1]=0;
    printf("\nArray after deletion: ");
    for (i=0;i<n;i++)
        printf("%d ",a[i]);
    return 0;
}