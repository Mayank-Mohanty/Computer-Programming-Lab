/*Write a menu driven program to perform Push,Pop,Traverse in a Stack.
 Mayank Mohanty 25BCSG88 Section A1 11*/
#include<stdio.h>
#define MAXSTK 10
int STACK[MAXSTK],TOP=-1;
void PUSH(int );
void POP();
void TRAVERSE();
int main()
{
	int item,choice=1;
	while (choice!=4)
	{
		printf("\nMenu:\n1.Push\n2.Pop\n3.Traverse\n4.Exit\nEnter your choice: ");
		scanf("%d",&choice);
		switch (choice)
		{
			case 1: printf("\nEnter element: ");
				scanf("%d",&item);
				PUSH(item);
				break;
			case 2: POP();
				break;
			case 3: TRAVERSE();
				break;
			case 4:	break;
			default: printf("\nWrong Input");
		}
	}
	return 0;
}
void PUSH(int item)
{
	if (TOP==MAXSTK-1)
		printf("\nStack Overflow");
	else
	{
		TOP++;
		STACK[TOP]=item;
	}
}
void POP()
{
	if (TOP==-1)
		printf("\nStack Underflow");
	else
	{
		printf("\n%d Removed",STACK[TOP]);
		TOP--;
	}
}
void TRAVERSE()
{
	int i;
	if (TOP==-1)
		printf("\nStack Empty");
	else
	{
		for (i=TOP;i>=0;i--)
			printf("%d ",STACK[i]);
	}
}

