/*Read n numbers integer arrray and display the minimum and maximum.
Mayank Mohanty 25BCSG88 Section A1 Roll No.11*/
#include<stdio.h>
int main()
{
    int i,n,min,max;
    printf("\nEnter the number of elements: ");
    scanf("%d",&n);
    int a[n];
    printf("\nEnter array elements: ");
    for (i=0;i<n;i++)
        scanf("%d",&a[i]);
    min=a[0];
    max=a[0];
    for (i=0;i<n;i++)
    {
        if (a[i]<min)
            min=a[i];
        if (a[i]>max)
            max=a[i];
    }
    printf("\nThe minimum and maximum element are: %d and %d",min,max);
    return 0;
}