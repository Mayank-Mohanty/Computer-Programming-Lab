/*WAP to implement Heap Sort using random array and find time complexity.
 Mayank Mohanty 25BCSG88 D1 18*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define MAX 100000
int A[MAX];
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
void RandomsArray(int,int,int);
void MAX_HEAPIFY(int[],int);
void BUILD_MAX_HEAP(int[],int);
void HEAPSORT(int[],int);
int main()
{
    int c,lb=1,ub=100;
    clock_t t1;
    double tot_exec_time;
    printf("\nEnter How Many Numbers To Generate: ");
    scanf("%d",&c);
    srand(time(0));
    RandomsArray(lb,ub,c);
    t1=clock();
    HEAPSORT(A,c);
    t1=clock()-t1;
    tot_exec_time=((double)t1)/CLOCKS_PER_SEC;
    printf("\nTotal Time Taken By Heap Sort = %lf seconds\n",tot_exec_time);
    return 0;
}
void MAX_HEAPIFY(int A[],int i)
{
    int l,r,largest,temp;
    l=LEFT(i);
    r=RIGHT(i);
    if(l<=heapsize && A[l]>A[i])
        largest=l;
    else
        largest=i;
    if(r<=heapsize && A[r]>A[largest])
        largest=r;
    if(largest!=i)
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
    for(i=length/2;i>=1;i--)
        MAX_HEAPIFY(A,i);
}
void HEAPSORT(int A[],int length)
{
    int i,temp;
    BUILD_MAX_HEAP(A,length);
    for(i=length;i>=2;i--)
    {
        temp=A[1];
        A[1]=A[i];
        A[i]=temp;
        heapsize--;
        MAX_HEAPIFY(A,1);
    }
}
void RandomsArray(int l,int u,int c)
{
    int i,num;
    for(i=1;i<=c;i++)
    {
        num=(rand()%(u-l+1))+l;
        A[i]=num;
    }
}
