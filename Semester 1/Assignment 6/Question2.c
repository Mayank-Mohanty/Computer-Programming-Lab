/*Read n numbers integer arrray and display the minimum.
Mayank Mohanty 25BCSG88 Section A1 Roll No.11*/
#include<stdio.h>
int main()
{
    int i,n,min;
    printf("\nEnter the number of elements: ");
    scanf("%d",&n);
    int a[n];
    printf("\nEnter array elements: ");
    for (i=0;i<n;i++)
        scanf("%d",&a[i]);
    min=a[0];
    for (i=0;i<n;i++)
    {
        if (a[i]<min)
            min=a[i];
    }
    printf("\nThe minimum element is: %d",min);
    return 0;
}