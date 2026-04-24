/*WAP to implement Quick Sort.
 Mayank Mohanty 25BCSG88 Section A1 11*/
#include<stdio.h>
void INPUT(int[],int);
void OUTPUT(int[],int);
void SWAP(int *,int *);
void QUICK_SORT(int[],int,int);
int PARTITION(int[],int,int);
int main()
{
	int a[100],size;
	printf("\nEnter the array size: ");
	scanf("%d",&size);
	INPUT(a,size);
	QUICK_SORT(a,0,size-1);
	OUTPUT(a,size);
	return 0;
}
void QUICK_SORT(int a[],int p,int r)
{
	int q;
	if(p<r)
	{
		q=PARTITION(a,p,r);
		QUICK_SORT(a,p,q-1);
		QUICK_SORT(a,q+1,r);
	}
}
int PARTITION(int a[],int p,int r)
{
	int x,i,j;
	x=a[r];
	i=p-1;
	for (j=p;j<r;j++)
	{
		if (a[j]<=x)
		{
			i++;
			SWAP(&a[i],&a[j]);
		}
	}
	SWAP(&a[i+1],&a[r]);
	return i+1;
}
void INPUT(int a[],int size)
{
	int i;
	printf("\nEnter elements: ");
	for(i=0;i<size;i++)
		scanf("%d",&a[i]);
}
void OUTPUT(int a[],int size)
{
	int i;
	printf("\nAfter sorting: ");
	for(i=0;i<size;i++)
		printf("%d ",a[i]);
}
void SWAP(int *x,int *y)
{
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
}
