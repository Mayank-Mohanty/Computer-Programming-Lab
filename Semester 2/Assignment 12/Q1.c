/*WAP to implement Merge Sort.
 Mayank Mohanty 25BCSG88 Section A1 11*/
#include<stdio.h>
void MERGE_SORT(int[],int,int);
void MERGE(int[],int,int,int);
int main()
{
    int a[100],size,i;
    printf("\nEnter the array size: ");
    scanf("%d",&size);
    printf("\nEnter elements: ");
    for(i=0;i<size;i++)
        scanf("%d",&a[i]);
    MERGE_SORT(a,0,size-1);
    printf("\nAfter sorting: ");
    for(i=0;i<size;i++)
        printf("%d ",a[i]);
    return 0;
}
void MERGE_SORT(int a[],int p,int r)
{
    int q;
    if(p<r)
    {
        q=(p+r)/2;
        MERGE_SORT(a,p,q);
        MERGE_SORT(a,q+1,r);
        MERGE(a,p,q,r);
    }
}
void MERGE(int a[],int p,int q,int r)
{
    int i,j,k,n1=q-p+1,n2=r-q;
    int L[n1+1],R[n2+1];
    for(i=0;i<n1;i++)
        L[i]=a[p+i];
    for(j=0;j<n2;j++)
        R[j]=a[q+j+1];
    L[n1]=9999;
    R[n2]=9999;
    i=j=0;
    for(k=p;k<=r;k++)
    {
        if(L[i]<=R[j])
        {
            a[k]=L[i];
            i++;
        }
        else
        {
            a[k]=R[j];
            j++;
        }
    }
}
