/*WAP to implement Merge Sort using random array and find time complexity.
 Mayank Mohanty 25BCSG88 D1 18*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define MAX 100000
int A[MAX];
void RandomsArray(int,int,int);
void MERGESORT(int[],int,int);
void MERGE(int[],int,int,int);
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
    MERGESORT(A,1,c);
    t1=clock()-t1;
    tot_exec_time=((double)t1)/CLOCKS_PER_SEC;
    printf("\nTotal Time Taken By Merge Sort = %lf seconds\n",tot_exec_time);
    return 0;
}
void MERGESORT(int A[],int p,int r)
{
    int q;
    if(p<r)
    {
        q=(p+r)/2;
        MERGESORT(A,p,q);
        MERGESORT(A,q+1,r);
        MERGE(A,p,q,r);
    }
}
void MERGE(int A[],int p,int q,int r)
{
    int i,j,k,n1=q-p+1,n2=r-q;
    int L[n1+2],R[n2+2];
    for(i=1;i<=n1;i++)
        L[i]=A[p+i-1];
    for(j=1;j<=n2;j++)
        R[j]=A[q+j];
    L[n1+1]=9999;
    R[n2+1]=9999;
    i=j=1;
    for(k=p;k<=r;k++)
    {
        if(L[i]<=R[j])
        {
            A[k]=L[i];
            i++;
        }
        else
        {
            A[k]=R[j];
            j++;
        }
    }
}
void RandomsArray(int l,int u,int c)
{
	int i,num;
	for (i=1;i<=c;i++)
	{
		num=(rand()%(u-l+1))+l;
		A[i]=num;
	}
}