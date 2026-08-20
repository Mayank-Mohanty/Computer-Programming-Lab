/*WAP to implement Linear Search using recursion.
Mayank Mohanty 25BCSG88 Section D1 18*/
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
int RLS(int a[],int i,int n,int key)
{
	if (i>=n)
		return -1;
	else if (a[i]==key)
		return i;
	else
		return RLS(a,i+1,n,key);
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
        LOC=RLS(a,0,n,key);
        if (LOC==-1)
                printf("\nElement not found\n");
        else
                printf("\nElement found at position %d\n",LOC+1);
        return 0;
}

