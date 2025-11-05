/*Search an element in array using binary search algorithm and print the position if found.
Mayank Mohanty 25BCSG88 Section A1 Roll No.11*/
#include <stdio.h>
int main()
{
    int a[100],n,i,low,high,mid,key,found=0;
    printf("\nEnter number of elements: ");
    scanf("%d",&n);
    printf("\nEnter sorted (ascending) array elements:");
    for (i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("\nEnter the element to search: ");
    scanf("%d",&key);
    low=0;
    high=n-1;
    while (low<=high) 
    {
        mid=(low+high)/2;
        if (a[mid]==key) 
        {
            printf("\nElement %d found at position: %d",key,mid + 1);
            found=1;
            break;
        } 
        else if (a[mid]<key)
            low=mid+1;
        else
            high=mid-1;
    }
    if (found==0)
        printf("\nElement not found");
    return 0;
}