/*WAP to implement Selection Sort.
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
void SelectionSort(int c)
{
        int i,j,min_index,temp;
        for (i=0;i<c-1;i++)
        {
                min_index=i;
                for (j=i+1;j<c;j++)
                {
                        if(A[j]<A[min_index])
                                min_index=j;
                }
                if (min_index!=i)
                {
                        temp=A[i];
                        A[i]=A[min_index];
                        A[min_index]=temp;
                }
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
        SelectionSort(c);
        t=clock()-t;
        printf("After Sorting: ");
        Display(c);
        tot_exec_time=((double)t)/CLOCKS_PER_SEC;
        printf("Total Time Taken = %lf seconds\n",tot_exec_time);
        return 0;
}
