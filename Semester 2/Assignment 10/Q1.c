/*WAMDP for STACK implemented using linked list.
 Mayank Mohanty 25BCSG88 Section A1 11*/
#include<stdio.h>
#include<stdlib.h>
struct node
{
	int info;
	struct node *next;
};
typedef struct node * STACK;
STACK PUSH(STACK ,int );
STACK POP(STACK );
void TRAVERSE(STACK );
int main()
{
	STACK TOP=NULL;
	int ch=1,item;
	printf("\nMenu:"
			"\n1.PUSH"
			"\n2.POP"
			"\n3.TRAVERSE"
			"\n4.EXIT");
	while (ch!=4)
	{
		printf("\nEnter your choice: ");
		scanf("%d",&ch);
		switch (ch)
		{
			case 1: printf("\nEnter element: ");
					scanf("%d",&item);
					TOP=PUSH(TOP,item);
					break;
			case 2: TOP=POP(TOP);
					break;
			case 3: TRAVERSE(TOP);
					break;
			case 4: break;
			default: printf("\nInvalid Input\n");
		}
	}
	return 0;
}
STACK PUSH(STACK s,int item)
{
	STACK temp;
	temp=(STACK)malloc(sizeof(struct node));
	if (temp==NULL)
	{
		printf("\nOut of memory\n");
		return s;
	}
	temp->info=item;
	temp->next=s;
	return temp;
}
STACK POP(STACK s)
{
	STACK temp;
	if (s==NULL)
	{
		printf("\nStack Underflow\n");
		return s;
	}
	temp=s;
	printf("\nDeleted element is %d",s->info);
	s=s->next;
	free(temp);
	return s;
}
void TRAVERSE(STACK s)
{
	if (s==NULL)
	{
		printf("\nStack Empty\n");
		return ;
	}
	printf("\nStack elements are: ");
	while (s!=NULL)
	{
		printf("%d ",s->info);
		s=s->next;
	}
}
