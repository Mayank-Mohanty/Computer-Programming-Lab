/*Search an element in array using linear search algorithm and print the position if found.
Mayank Mohanty 25BCSG88 Section A1 Roll No.11*/
#include <stdio.h>
int main()
{
    int n,i,item,found=0;
    printf("\nEnter the number of elements: ");
    scanf("%d",&n);
    int a[n];
    printf("\nEnter array elements: ");
    for (i=0;i<n;i++) 
        scanf("%d",&a[i]);
    printf("\nEnter the element to search: ");
    scanf("%d",&item);
    for (i=0;i<n;i++) 
    {
        if(a[i]==item) 
        {
            printf("\nElement found at position: %d",i + 1);
            found=1;
            break;
        }
    }
    if(found==0)
        printf("\nElement not found");
    return 0;
}