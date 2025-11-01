/*Insert an element in array at a certain position.
Mayank Mohanty 25BCSG88 Section A1 Roll No.11*/
#include <stdio.h>
int main()
{
    int a[100],n,i,pos,value;
    printf("\nEnter the number of elements: ");
    scanf("%d",&n);
    printf("\nEnter array elements: ");
    for (i=0;i<n;i++) 
        scanf("%d",&a[i]);
    printf("\nEnter the value to add and its position: ");
    scanf("%d%d",&value,&pos);
    for(i=n;i>=pos;i--)
        a[i]=a[i-1];
    a[pos-1]=value;
    n++;
    printf("\nArray after inserting new value: ");
    for (i=0;i<n;i++)
        printf("%d ",a[i]);
    return 0;
}