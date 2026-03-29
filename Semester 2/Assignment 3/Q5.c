/*WAP to implement Binary Search.
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
int BinarySearch(int a[],int n,int key)
{
	int low=0,high=n-1,mid;
	while(low<=high)
	{
		mid=(low+high)/2;
		if (a[mid]==key)
			return mid;
		else
		{
			if (key>a[mid])
				low=mid+1;
			else
				high=mid-1;
		}
	}
	return -1;
}
int main()
{
	int i,n,key,LOC;
	printf("\nEnter no. of elements: ");
	scanf("%d",&n);
	int a[n];
	printf("\nEnter elements: ");
	Input(a,n);
	printf("\nEnter element to search: ");
	scanf("%d",&key);
	LOC=BinarySearch(a,n,key);
	if (LOC==-1)
		printf("\nElement not found\n");
	else
		printf("\nElement found at position %d\n",LOC+1);
	return 0;
}

