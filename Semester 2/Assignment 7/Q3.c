/*WAP to create two different linked list and then merge them.
 Mayank Mohanty 25BCSG88 Section A1 11*/
#include<stdio.h>
#include<stdlib.h>
struct node
{
	int info;
	struct node* next;
};
void createlist(struct node *);
void traverse(struct node *);
void Merge(struct node *,struct node *,struct node *);
int main()
{
	struct node *start1,*start2,*start3;
	start1=(struct node *)malloc(sizeof(struct node));
	start2=(struct node *)malloc(sizeof(struct node));
	start3=(struct node *)malloc(sizeof(struct node));
	if (start1==NULL)
	{
		printf("\nOut of memory\n");
		exit(0);
	}
	if (start2==NULL)
	{
		printf("\nOut of memory\n");
		exit(0);
	}
	if (start3==NULL)
	{
		printf("\nOut of memory\n");
		exit(0);
	}
	printf("\nEnter 1st linked list:\n");
	createlist(start1);
	printf("\n1st linked list:\n");
	traverse(start1);
	printf("\nEnter 2nd linked list:\n");
	createlist(start2);
	printf("\n2nd linked list:\n");
	traverse(start2);
	Merge(start1,start2,start3);
	printf("\nAfter Merging:\n");
	traverse(start3);
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
	}	printf("\nElements are: ");
	while (ptr!=NULL)
	{
		printf("%d ",ptr->info);
		ptr=ptr->next;
	}
}
void Merge(struct node *link1, struct node *link2,struct node *link3)
{
	link3->info=link1->info;
	link3->next=NULL;
	link1=link1->next;
	while (link1!=NULL)
	{
		link3->next=(struct node *)malloc(sizeof(struct node));
		if (link3->next==NULL)
		{
			printf("\nOut of memory\n");
			return;
		}
		link3=link3->next;
		link3->info=link1->info;
		link3->next=NULL;
		link1=link1->next;
	}
	while (link2!=NULL)
	{
		link3->next=(struct node *)malloc(sizeof(struct node));
		if (link3->next==NULL)
		{
			printf("\nOut of memory\n");
			return;
		}
		link3=link3->next;
		link3->info=link2->info;
		link3->next=NULL;
		link2=link2->next;
	}
}

