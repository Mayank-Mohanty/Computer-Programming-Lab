/*WAP to create a single linked list and then traverse it.
 Mayank Mohanty 25BCSG88 Section A1 11*/
#include<stdio.h>
#include<stdlib.h>
struct node
{
	int info;
	struct node* next;
};
void createlist(struct node*);
void traverse(struct node*);
int main()
{
	struct node* start;
	start=(struct node*)malloc(sizeof(struct node));
	if (start==NULL)
	{
		printf("\nOut of memory\n");
		exit(0);
	}
	createlist(start);
	traverse(start);
}
void createlist(struct node*link)
{
	int i=1;
	char ch;
	printf("\nEnter element for node %d: ",i);
	scanf("%d",&link->info);
	link->next=NULL;
	i++;
	printf("\nDo you want to add another node Y/N: ");
	scanf(" %c",&ch);
	while (ch!='N')
	{
		link->next=(struct node*)malloc(sizeof(struct node));
		if (link->next==NULL)
		{
			printf("\nOut of memory\n");
			return ;
		}
		link=link->next;
		printf("\nEnter element for node %d: ",i);
		scanf("%d",&link->info);
		link->next=NULL;
		i++;
		printf("\nDo you want to add another node Y/N: ");
	        scanf(" %c",&ch);
	}
}
void traverse(struct node* ptr)
{
	if (ptr==NULL)
	{
		printf("\nLinked List is empty\n");
		return ;
	}
	printf("\nElements are: ");
	while (ptr!=NULL)
	{
		printf("%d ",ptr->info);
		ptr=ptr->next;
	}
}

