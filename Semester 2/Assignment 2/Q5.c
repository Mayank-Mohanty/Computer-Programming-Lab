/*WAP to allocate memory dynamically for an array. Find out the largest and smallest element of the array.
 Mayank Mohanty 25BCSG88 Section A1 11*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,n,*arr,max,min;
	printf("\nEnter no. of elements: ");
	scanf("%d",&n);
	arr=(int *)malloc(n*sizeof(int));
	printf("\nEnter elements: ");
	for (i=0;i<n;i++)
		scanf("%d",&arr[i]);
	max=min=arr[0];
	for (i=0;i<n;i++)
	{
		if (arr[i]>max)
			max=arr[i];
		if (arr[i]<min)
			min=arr[i];
	}
	printf("\nLargest = %d\nSmallest = %d\n",max,min);
	free(arr);
	return 0;
}

