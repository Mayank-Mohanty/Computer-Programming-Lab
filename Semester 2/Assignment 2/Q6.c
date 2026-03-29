/*WAP to allocate memory dynamically for an array. Check whether an inputted element is present in this array or not..
   Mayank Mohanty 25BCSG88 Section A1 11*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
        int i,n,*arr,key,found=0;
        printf("\nEnter no. of elements: ");
        scanf("%d",&n);
        arr=(int *)malloc(n*sizeof(int));
        printf("\nEnter elements: ");
        for (i=0;i<n;i++)
		scanf("%d",&arr[i]);
        printf("\nEnter element to search: ");
	scanf("%d",&key);
	for (i=0;i<n;i++)
	{
		if (arr[i]==key)
		{
			found=1;
			break;
		}
	}
	if (found)
		printf("\nElement found\n");
	else
		printf("\nElement not found\n");
	free(arr);
	return 0;
}

