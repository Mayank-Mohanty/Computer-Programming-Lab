/*WAP to implement Heap Sort.
 Mayank Mohanty 25BCSG88 18 D1*/
#include <stdio.h>
int heapsize;
int LEFT(int i)
{
    return 2*i;
}
int RIGHT(int i)
{
    return 2*i+1;
}
int PARENT(int i)
{
    return i/2;
}
void MAX_HEAPIFY(int A[],int i)
{
    int l,r,largest,temp;
    l=LEFT(i);
    r=RIGHT(i);
    if (l<=heapsize && A[l]>A[i])
        largest=l;
    else
        largest=i;
    if (r<=heapsize && A[r]>A[largest])
        largest=r;
    if (largest!=i)
    {
        temp=A[i];
        A[i]=A[largest];
        A[largest]=temp;
        MAX_HEAPIFY(A,largest);
    }
}
void BUILD_MAX_HEAP(int A[],int length)
{
    int i;
    heapsize=length;
    for (i=length/2;i>=1;i--)
        MAX_HEAPIFY(A,i);
}
void HEAPSORT(int A[],int length)
{
    int i,temp;
    BUILD_MAX_HEAP(A,length);
    for (i=length;i>=2;i--)
    {
        temp=A[1];
        A[1]=A[i];
        A[i]=temp;
        heapsize--;
        MAX_HEAPIFY(A,1);
    }
}
int main()
{
    int A[100],n,i;
    printf("Enter No. Of Elements: ");
    scanf("%d",&n);
    printf("Enter Elements: ");
    for (i=1;i<=n;i++)
        scanf("%d",&A[i]);
    HEAPSORT(A,n);
    printf("Sorted array: ");
    for (i=1;i<=n;i++)
        printf("%d ",A[i]);
    return 0;
}
