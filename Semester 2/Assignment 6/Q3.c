/*Write a menu driven program to implement 2 different stack using a single array.
 Mayank Mohanty 25BCSG88 Section A1 11*/
#include<stdio.h>
#define N 10
int STACK1[N],STACK2[N],TOP1=-1,TOP2=N;
void PUSH1(int );
void PUSH2(int );
void POP1();
void POP2();
void TRAVERSE1();
void TRAVERSE2();
int main()
{
	int item,choice=1;
	printf("\nMenu:\n1.Push1\n2.Push2\n3.Pop1\n4.Pop2\n5.Traverse1\n6.Traverse2\n7.Exit");
	while (choice!=7)
	{
		printf("\nEnter your choice: ");
		scanf("%d",&choice);
		switch (choice)
		{
			case 1: printf("\nEnter element: ");
				scanf("%d",&item);
				PUSH1(item);
				break;
			case 2: printf("\nEnter element: ");
				scanf("%d",&item);
				PUSH2(item);
				break;
			case 3: POP1();
				break;
			case 4: POP2();
				break;
			case 5: TRAVERSE1();
				break;
			case 6: TRAVERSE2();
				break;
			case 7: break;
			default: printf("\nWrong Input\n");
		}
	}
	return 0;
}
void PUSH1(int item)
{
	if (TOP2==TOP1+1)
		printf("\nStack1 Overflow\n");
	else
	{
		TOP1++;
		STACK1[TOP1]=item;
	}
}
void PUSH2(int item)
{
	if (TOP2==TOP1+1)
		printf("\nStack2 Overflow\n");
	else
	{
		TOP2--;
		STACK2[TOP2]=item;
	}
}
void POP1()
{
	int item;
	if (TOP1==-1)
		printf("\nStack1 Underflow\n");
	else
	{
		item=STACK1[TOP1];
		TOP1--;
		printf("\n%d Removed",item);
	}
}
void POP2()
{
	int item;
	if (TOP2==N)
		printf("\nStack2 Underflow\n");
	else
	{
		item=STACK2[TOP2];
		TOP2++;
		printf("\n%d Removed",item);
	}
}
void TRAVERSE1()
{
	int i;
	if (TOP1==-1)
		printf("\nStack1 Empty\n");
	else
	{
		for (i=TOP1;i>-1;i--)
			printf("%d ",STACK1[i]);
	}
}
void TRAVERSE2()
{
	int i;
	if (TOP2==N)
		printf("\nStack2 Empty\n");
	else
	{
		for (i=TOP2;i<N;i++)
			printf("%d ",STACK2[i]);
	}
}

