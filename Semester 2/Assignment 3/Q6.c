/*WAP to implement Binary Search using recursion.
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
int RBS(int a[],int n,int key,int low,int high)
{
	int mid;
	if (high<low)
		return -1;
	else
	{
		mid=(low+high)/2;
		if (a[mid]==key)
			return mid;
		else
		{
			if (key>a[mid])
				return RBS(a,n,key,mid+1,high);
			else
				return RBS(a,n,key,low,mid-1);
		}
	}
}
int main()
{
	int i,n,key,LOC,low,high;
	printf("\nEnter no. of elements: ");
	scanf("%d",&n);
	int a[n];
	printf("\nEnter elements: ");
	Input(a,n);
	printf("\nEnter element to search: ");
	scanf("%d",&key);
	low=0;
	high=n-1;
	LOC=RBS(a,n,key,low,high);
	if (LOC==-1)
		printf("\nElement not found\n");
	else
		printf("\nElement found at position %d\n",LOC+1);
	return 0;
}

