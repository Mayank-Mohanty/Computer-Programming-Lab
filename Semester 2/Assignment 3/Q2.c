/*WAP to implement Selection Sort.
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
void SelectionSort(int a[],int n)
{
	int i,j,min_index,temp;
	for (i=0;i<n-1;i++)
	{
		min_index=i;
		for (j=i+1;j<n;j++)
		{
			if(a[j]<a[min_index])
				min_index=j;
		}
		if (min_index!=i)
		{
			temp=a[i];
			a[i]=a[min_index];
			a[min_index]=temp;
		}
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
	SelectionSort(a,n);
	printf("\nAfter Sorting: ");
	Display(a,n);
	printf("\n");
	return 0;
}

