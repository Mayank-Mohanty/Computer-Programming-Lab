/*WAP to implement Linear Search.
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
int LinearSearch(int a[],int n,int key)
{
	int i;
	for (i=0;i<n;i++)
	{
		if (a[i]==key)
			return i;
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
	LOC=LinearSearch(a,n,key);
	if (LOC==-1)
		printf("\nElement not found\n");
	else
		printf("\nElement found at position %d\n",LOC+1);
	return 0;
}

