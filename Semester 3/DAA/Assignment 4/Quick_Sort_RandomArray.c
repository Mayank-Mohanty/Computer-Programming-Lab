/*WAP to implement Quick Sort using random array and find time complexity.
 Mayank Mohanty 25BCSG88 D1 18*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define MAX 100000
int A[MAX];
void RandomsArray(int,int,int);
void QUICKSORT(int[],int,int);
int PARTITION(int[],int,int);
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
    QUICKSORT(A,1,c);
    t1=clock()-t1;
    tot_exec_time=((double)t1)/CLOCKS_PER_SEC;
    printf("\nTotal Time Taken By Quick Sort = %lf seconds\n",tot_exec_time);
    return 0;
}
void QUICKSORT(int A[],int p,int r)
{
	int q;
	if(p<r)
	{
		q=PARTITION(A,p,r);
		QUICKSORT(A,p,q-1);
		QUICKSORT(A,q+1,r);
	}
}
int PARTITION(int A[],int p,int r)
{
	int x,i,j,temp;
	x=A[r];
	i=p-1;
	for (j=p;j<r;j++)
	{
		if (A[j]<=x)
		{
			i++;
			temp=A[i];
			A[i]=A[j];
			A[j]=temp;
		}
	}
	temp=A[i+1];
	A[i+1]=A[r];
	A[r]=temp;
	return i+1;
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