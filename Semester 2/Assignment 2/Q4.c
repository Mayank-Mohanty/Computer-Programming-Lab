/*WAP to allocate memory dynamically for an integer array of size 10, enter array elements and find their sum.
 Mayank Mohanty 25BCSG88 Section A1 11*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *arr,i,sum=0;
	arr=(int *)malloc(10*sizeof(int));
	printf("\nEnter 10 elements: ");
	for (i=0;i<10;i++)
	{
		scanf("%d",&arr[i]);
		sum+=arr[i];
	}
	printf("\nSum = %d",sum);
	printf("\n");
	free(arr);
	return 0;
}

