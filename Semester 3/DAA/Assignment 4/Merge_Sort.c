/*WAP to implement Merge Sort.
 Mayank Mohanty 25BCSG88 D1 18*/
#include<stdio.h>
void INPUT(int[],int);
void OUTPUT(int[],int);
void MERGESORT(int[],int,int);
void MERGE(int[],int,int,int);
int main()
{
    int A[100],size,i;
    printf("\nEnter the array size: ");
    scanf("%d",&size);
    INPUT(A,size);
    MERGESORT(A,1,size);
    OUTPUT(A,size);
    return 0;
}
void MERGESORT(int A[],int p,int r)
{
    int q;
    if(p<r)
    {
        q=(p+r)/2;
        MERGESORT(A,p,q);
        MERGESORT(A,q+1,r);
        MERGE(A,p,q,r);
    }
}
void MERGE(int A[],int p,int q,int r)
{
    int i,j,k,n1=q-p+1,n2=r-q;
    int L[n1+2],R[n2+2];
    for(i=1;i<=n1;i++)
        L[i]=A[p+i-1];
    for(j=1;j<=n2;j++)
        R[j]=A[q+j];
    L[n1+1]=9999;
    R[n2+1]=9999;
    i=j=1;
    for(k=p;k<=r;k++)
    {
        if(L[i]<=R[j])
        {
            A[k]=L[i];
            i++;
        }
        else
        {
            A[k]=R[j];
            j++;
        }
    }
}
void INPUT(int A[],int size)
{
	int i;
	printf("\nEnter elements: ");
	for(i=1;i<=size;i++)
		scanf("%d",&A[i]);
}
void OUTPUT(int A[],int size)
{
	int i;
	printf("\nAfter sorting: ");
	for(i=1;i<=size;i++)
		printf("%d ",A[i]);
}

