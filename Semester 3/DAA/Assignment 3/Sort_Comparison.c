/*WAP to compare Bubble Sort, Selection Sort and Insertion Sort.
 Mayank Mohanty 25BCSG88 Section D1 18*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define MAX 100000
int A[MAX],B[MAX],C[MAX];
void RandomsArray(int l,int u,int c)
{
	int i,num;
	for (i=0;i<c;i++)
	{
		num=(rand()%(u-l+1))+l;
		A[i]=num;
	}
}
void BubbleSort(int c)
{
	int pass,i,temp;
	for (pass=0;pass<c-1;pass++)
	{
		for(i=0;i<c-1-pass;i++)
		{
			if(A[i]>A[i+1])
			{
				temp=A[i];
				A[i]=A[i+1];
				A[i+1]=temp;
			}
		}
	}
}
void SelectionSort(int c)
{
        int i,j,min_index,temp;
        for (i=0;i<c-1;i++)
        {
                min_index=i;
                for (j=i+1;j<c;j++)
                {
                        if(B[j]<B[min_index])
                                min_index=j;
                }
                if (min_index!=i)
                {
                        temp=B[i];
                        B[i]=B[min_index];
                        B[min_index]=temp;
                }
        }
}
void InsertionSort(int c)
{
	int i,j,key;
	for (i=1;i<c;i++)
	{
		key=C[i];
		for (j=i-1;j>=0 && C[j]>key;j--)
			C[j+1]=C[j];
		C[j+1]=key;
	}
}
int main()
{
    int lb=1,ub=100,c,i;
	printf("Enter How Many Numbers To Generate: ");
    scanf("%d",&c);
    clock_t t1,t2,t3;
    double tot_exec_time;
    srand(time(0));
    RandomsArray(lb,ub,c);
    for (i=0;i<c;i++)
    {
        B[i]=A[i];
        C[i]=A[i];
    }
    t1=clock();
	BubbleSort(c);
	t1=clock()-t1;
    tot_exec_time=((double)t1)/CLOCKS_PER_SEC;
    printf("Total Time Taken By BubbleSort = %lf seconds\n",tot_exec_time);
    t2=clock();
	SelectionSort(c);
	t2=clock()-t2;
    tot_exec_time=((double)t2)/CLOCKS_PER_SEC;
    printf("Total Time Taken By SelectionSort = %lf seconds\n",tot_exec_time);
    t3=clock();
	InsertionSort(c);
	t3=clock()-t3;
    tot_exec_time=((double)t3)/CLOCKS_PER_SEC;
    printf("Total Time Taken By InsertionSort = %lf seconds\n",tot_exec_time);
    return 0;
}