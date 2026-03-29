/*WAP to represent and display a polynomial using a single linked list.
 Mayank Mohanty 25BCSG88 Section A1 11*/
#include<stdio.h>
#include<stdlib.h>
struct node
{
	int coeff,exp;
	struct node* next;
};
void createlist(struct node *);
void traverse(struct node *);
int main()
{
	struct node *start;
	start=(struct node *)malloc(sizeof(struct node));
	if (start==NULL)
	{
		printf("\nOut of memory\n");
		exit(0);
	}
	createlist(start);	
	traverse(start);
}
void createlist(struct node *link)
{
	int i=1;
	char ch;
	printf("\nEnter coefficient for node %d: ",i);
	scanf("%d",&link->coeff);
	printf("\nEnter exponent for node %d: ",i);
	scanf("%d",&link->exp);
	link->next=NULL;
	i++;
	printf("\nDo you want to add another node Y/N: ");
	scanf(" %c",&ch);
	while (ch!='N')
	{
		link->next=(struct node *)malloc(sizeof(struct node));
		if (link->next==NULL)
		{
			printf("\nOut of memory\n");
			return ;
		}
		link=link->next;
		printf("\nEnter coefficient for node %d: ",i);
		scanf("%d",&link->coeff);
		printf("\nEnter exponent for node %d: ",i);
		scanf("%d",&link->exp);
		link->next=NULL;
		i++;
		printf("\nDo you want to add another node Y/N: ");
		scanf(" %c",&ch);
	}
}
void traverse(struct node *ptr)
{
	if (ptr==NULL)
	{
		printf("\nLinked List is empty\n");
		return ;
	}
	printf("\nElements are: ");
	while (ptr!=NULL)
	{
		printf("%dx^%d",ptr->coeff,ptr->exp);
		if (ptr->next!=NULL)
			printf("+");
		ptr=ptr->next;
	}
}

