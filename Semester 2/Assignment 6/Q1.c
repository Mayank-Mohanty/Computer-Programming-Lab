/*Write a menu driven program to perform Insert, Delete & Traverse in a Queue.
 Mayank Mohanty 25BCSG88 Section A1 11*/
#include<stdio.h>
#define N 10
int QUEUE[N],FRONT=-1,REAR=-1;
void LQINSERT(int );
void LQDELETE();
void LQTRAVERSE();
int main()
{
	int item,choice=1;
	while (choice!=4)
	{
		printf("\nMenu:\n1.Insert\n2.Delete\n3.Traverse\n4.Exit\nEnter your choice: ");
		scanf("%d",&choice);
		switch (choice)
		{
			case 1: printf("\nEnter element: ");
				scanf("%d",&item);
				LQINSERT(item);
				break;
			case 2: LQDELETE();
				break;
			case 3: LQTRAVERSE();			
				break;				
			case 4: break;
			default: printf("\nWrong Input\n");
		}
	}
	return 0;
}
void LQINSERT(int item)
{
	        if (REAR==N-1)
			printf("\nQueue Overflow\n");
		else
		{
			REAR++;
			QUEUE[REAR]=item;
			if (FRONT=-1)
				FRONT=0;
		}
}
void LQDELETE()
{
	int item;
	if(FRONT==-1)
		printf("\nQueue Underflow\n");
	else
	{
		item=QUEUE[FRONT];
		if (FRONT==REAR)
			FRONT=REAR=-1;
		else
			FRONT++;
		printf("%d removed",item);
	}
}
void LQTRAVERSE()
{
	int i;
	if (FRONT==-1)
		printf("\nQueue is empty\n");
	else
	{
		printf("\n");
		for (i=FRONT;i<=REAR;i++)
			printf("%d ",QUEUE[i]);
	}
}

