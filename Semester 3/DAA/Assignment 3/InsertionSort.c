/*WAP to implement Insertion Sort.
 Mayank Mohanty 25BCSG88 Section D1 18*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define MAX 100000
int A[MAX];
void RandomsArray(int l,int u,int c)
{
        int i,num;
        for (i=0;i<c;i++)
        {
                num=(rand()%(u-l+1))+l;
                A[i]=num;
        }
}
int InsertionSort(int c)
{
	int i,j,key;
	for (i=1;i<c;i++)
	{
		key=A[i];
		for (j=i-1;j>=0 && A[j]>key;j--)
			A[j+1]=A[j];
		A[j+1]=key;
	}
}
void Display(int c)
{
        for (int i=0;i<c;i++)
                printf("%d ",A[i]);
        printf("\n");
}
int main()
{
        int lb=1,ub=100,c;
	printf("Enter How Many Numbers To Generate: ");
        scanf("%d",&c);
        clock_t t;
        double tot_exec_time;
        srand(time(0));
        RandomsArray(lb,ub,c);
        printf("Before Sorting: ");
        Display(c);
        t=clock();
        InsertionSort(c);
        t=clock()-t;
        printf("After Sorting: ");
        Display(c);
        tot_exec_time=((double)t)/CLOCKS_PER_SEC;
        printf("Total Time Taken = %lf seconds\n",tot_exec_time);
        return 0;
}
