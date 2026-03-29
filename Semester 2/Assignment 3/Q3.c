/*WAP to implement Insertion Sort.
 Mayank Mohanty 25BCSG88 Section A1 11*/
#include<stdio.h>
void Input(int a[], int n)
{
	int i;
	for (i=0;i<n;i++)
		scanf("%d",&a[i]);
}
void Display(int a[], int n)
{
	int i;
	for (i=0;i<n;i++)
		printf("%d ",a[i]);
}
int InsertionSort(int a[],int n)
{
	int i,j,key;
	for (i=1;i<n;i++)
	{
		key=a[i];
		for (j=i-1;j>=0 && a[j]>key;j--)
			a[j+1]=a[j];
		a[j+1]=key;
	}
}
int main()
{
	int i,n;
	printf("\nEnter no. of elements: ");
	scanf("%d",&n);
	int a[n];
	printf("\nEnter elements: ");
	Input(a,n);
	InsertionSort(a,n);
	printf("\nAfter Sorting: ");
	Display(a,n);
	printf("\n");
	return 0;
}

