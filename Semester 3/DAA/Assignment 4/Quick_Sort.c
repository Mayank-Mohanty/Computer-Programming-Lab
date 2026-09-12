/*WAP to implement Quick Sort.
 Mayank Mohanty 25BCSG88 D1 18*/
#include<stdio.h>
void INPUT(int[],int);
void OUTPUT(int[],int);
void QUICKSORT(int[],int,int);
int PARTITION(int[],int,int);
int main()
{
	int A[100],size;
	printf("\nEnter the array size: ");
	scanf("%d",&size);
	INPUT(A,size);
	QUICKSORT(A,1,size);
	OUTPUT(A,size);
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
void INPUT(int A[],int size)
{
	int i;
	printf("\nEnter elements: ");
	for(i=1;i<=size;i++)
		scanf("%d",&A[i]);
}
void OUTPUT(int A[],int size)
{
	int i;
	printf("\nAfter sorting: ");
	for(i=1;i<=size;i++)
		printf("%d ",A[i]);
}

