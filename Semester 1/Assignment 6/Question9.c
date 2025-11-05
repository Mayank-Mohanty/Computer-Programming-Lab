/*Sort elements in array using selection sort algorithm.
Mayank Mohanty 25BCSG88 Section A1 Roll No.11*/
#include <stdio.h>
int main()
{
    int a[100],n,i,j,min_index,temp;
    printf("\nEnter number of elements: ");
    scanf("%d",&n);
    printf("\nEnter array elements:");
    for (i=0;i<n;i++)
        scanf("%d",&a[i]);
    for (i=0;i<n-1;i++) 
    {
        min_index=i;
        for (j=i+1;j<n;j++) 
        {
            if (a[j]<a[min_index])
                min_index=j;
        }
        if (min_index!=i) 
        {
            temp=a[i];
            a[i]=a[min_index];
            a[min_index]=temp;
        }
    }
    printf("\nSorted array in ascending order:");
    for (i=0;i<n;i++)
        printf("%d ",a[i]);
    return 0;
}