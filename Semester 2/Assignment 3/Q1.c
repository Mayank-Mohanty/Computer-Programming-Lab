/*WAP to implement Bubble Sort.
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
void BubbleSort(int a[],int n)
{
	int pass,i,temp;
	for (pass=0;pass<n-1;pass++)
	{
		for(i=0;i<n-1-pass;i++)
		{
			if(a[i]>a[i+1])
			{
				temp=a[i];
				a[i]=a[i+1];
				a[i+1]=temp;
			}
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
	BubbleSort(a,n);
	printf("\nAfter Sorting: ");
	Display(a,n);
	printf("\n");
	return 0;
}

