/*Write a menu driven program to perform Insert, Delete & Traverse in a Circular Queue.
   Mayank Mohanty 25BCSG88 Section A1 11*/
#include<stdio.h>
#define N 4
int QUEUE[N],FRONT=-1,REAR=-1;
void CQINSERT(int );
void CQDELETE();
void CQTRAVERSE();
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
				CQINSERT(item);
				break;
			case 2: CQDELETE();
				break;
			case 3: CQTRAVERSE();
				break;
			case 4: break;
			default: printf("\nWrong Input\n");
		}
	}
	return 0;
}
void CQINSERT(int item)
{
	if ((REAR+1)%N==FRONT)
		printf("\nQueue Overflow\n");
	else if (FRONT==-1 && REAR==-1)
	{
		FRONT=REAR=0;
		QUEUE[REAR]=item;
	}
	else
	{
		REAR=(REAR+1)%N;
		QUEUE[REAR]=item;
	}
}
void CQDELETE()
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
		{
			if (FRONT==N-1)
				FRONT=0;
			else
				FRONT++;
		}
		printf("%d removed",item);
	}
}
void CQTRAVERSE()
{
	int i;
	if (FRONT==-1)
		printf("\nCircular Queue is empty\n");
	else if (FRONT>REAR)
	{
		printf("\n");
		for (i=FRONT;i<N;i++)
			printf("%d ",QUEUE[i]);
		for (i=0;i<=REAR;i++)
 			printf("%d ",QUEUE[i]);
	}
	else
	{
		for (i=FRONT;i<=REAR;i++)
			printf("%d ",QUEUE[i]);
	}
}

