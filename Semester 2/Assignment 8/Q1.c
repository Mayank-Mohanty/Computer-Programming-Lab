/*Write a menu driven program to perform operations on double linked list.
 Mayank Mohanty 25BCSG88 Section A1 11*/
#include<stdio.h>
#include<stdlib.h>
struct node
{
	struct node *prev,*next;
	int info;
};
struct node *newstart;
void createlist(struct node *);
void traverse(struct node *);
void insert_beg(struct node *);
void insert_end(struct node *);
void insert_loc(struct node *);
void delete_beg(struct node *);
void delete_end(struct node *);
void delete_loc(struct node *);
int count(struct node *);
int main()
{
	struct node *start;
	int ch=1,key;
	start=(struct node *)malloc(sizeof(struct node));
	if (start==NULL)
	{
		printf("\nOut of memory\n");
		exit(0);
	}
	createlist(start);
	printf("\nMenu:"
		"\n1.Traverse"
		"\n2.Insert at beginning"
		"\n3.Insert at end"
		"\n4.Insert at any location"
		"\n5.Delete the first node"
		"\n6.Delete the last node"
		"\n7.Delete from any location"
		"\n8.Exit");
	while (ch!=8)
	{
		printf("\nEnter your choice: ");
		scanf("%d",&ch);
		switch (ch)
		{
			case 1: traverse(start);
				break;
			case 2: insert_beg(start);
				start=newstart;
				break;
			case 3: insert_end(start);
				break;
			case 4: newstart=start;
				insert_loc(start);
				start=newstart;
				break;
			case 5: delete_beg(start);
				start=newstart;
				break;
			case 6: newstart=start;
				delete_end(start);
				start=newstart;
				break;
			case 7: newstart=start;
				delete_loc(start);
				start=newstart;
				break;
			case 8: break;
			default: printf("\nWrong Input\n");
		}
	}
	return 0;			
}
void createlist(struct node *dlink)
{
	int i=1;
	char ch;
	struct node *cur;
	printf("\nEnter element for node %d: ",i);
	scanf("%d",&dlink->info);
	dlink->prev=NULL;
	dlink->next=NULL;
	i++;
	printf("\nDo you want to enter another node: ");
	scanf(" %c",&ch);
	while (ch!='N')
	{
		cur=(struct node *)malloc(sizeof(struct node));
		if (cur==NULL)
		{
			printf("\nOut of memory\n");
			return ;
		}
		dlink->next=cur;
		cur->prev=dlink;
		cur->next=NULL;
		printf("\nEnter element for node %d: ",i);
		scanf("%d",&cur->info);
		dlink=cur;
		i++;
		printf("\nDo you want to enter another node: ");
		scanf(" %c",&ch);
	}
}
void traverse(struct node *dlink)
{
	struct node *temp;
	printf("\nElement in forward direction: ");
	while (dlink!=NULL)
	{
		temp=dlink;
		printf("%d\t",dlink->info);
		dlink=dlink->next;
	}
	printf("\nElements in backward direction: ");
	while(temp!=NULL)
	{
		printf("%d\t",temp->info);
		temp=temp->prev;
	}
}
void insert_beg(struct node *dlink)
{
	struct node *cur;
	cur=(struct node *)malloc(sizeof(struct node));
	if (cur==NULL)
	{
		printf("\nOut of memory\n");
		return ;
	}
	printf("\nEnter element: ");
	scanf("%d",&cur->info);
	cur->prev=NULL;
	cur->next=dlink;
	dlink->prev=cur;
	newstart=cur;
}
void insert_end(struct node *dlink)
{
	struct node *cur;
	cur=(struct node *)malloc(sizeof(struct node));
	if (cur==NULL)
	{
		printf("\nOut of memory\n");
		return ;
	}
	printf("\nEnter element: ");
	scanf("%d",&cur->info);
	while(dlink->next!=NULL)
		dlink=dlink->next;
	dlink->next=cur;
	cur->prev=dlink;
	cur->next=NULL;
}
void delete_beg(struct node *dlink)
{
	if (dlink->next==NULL)
	{
		newstart=NULL;
		free(dlink);
		return ;
	}
	newstart=dlink->next;
	newstart->prev=NULL;
	free(dlink);
}
void delete_end(struct node *dlink)
{
	struct node *temp;
	if (dlink->next==NULL)
	{
		newstart=NULL;
		free(dlink);
		return ;
	}
	while (dlink->next!=NULL)
		dlink=dlink->next;
	temp=dlink->prev;
	temp->next=NULL;
	free(dlink);
}
void insert_loc(struct node *dlink)
{
	struct node *cur;
	int LOC,c,i=1;
	printf("\nEnter location: ");
	scanf("%d",&LOC);
	c=count(dlink);
	if (LOC>c)
	{
		printf("\nInvalid Location\n");
		return ;
	}
	cur=(struct node *)malloc(sizeof(struct node));
	if (cur==NULL)
	{
		printf("\nOut of memory\n");
		return ;
	}
	printf("\nEnter element: ");
	scanf("%d",&cur->info);
	if (LOC==1)
	{
		cur->prev=NULL;
		cur->next=dlink;
		dlink->prev=cur;
		newstart=cur;
		return ;
	}
	while (i<LOC)
	{
		dlink=dlink->next;
		i++;
	}
	cur->prev=dlink->prev;
	dlink->prev->next=cur;
	cur->next=dlink;
	dlink->prev=cur;
}
void delete_loc(struct node *dlink)
{
	struct node *temp;
	int LOC,c,i=1;
	printf("\nEnter location: ");
	scanf("%d",&LOC);
	c=count(dlink);
	if (LOC>c)
	{
		printf("\nInvalid Location\n");
		return ;
	}
	if (LOC==1)
	{
		if (dlink->next==NULL)
		{
			newstart=NULL;
			free(dlink);
			return ;
		}
		newstart=dlink->next;
		newstart->prev=NULL;
		free(dlink);
		return;
	}
	while (i<LOC)
	{
		dlink=dlink->next;
		i++;
	}
	temp=dlink->prev;
	temp->next=dlink->next;
	if (dlink->next!=NULL)
		dlink->next->prev=temp;
	free(dlink);
}
int count(struct node *dlink)
{
	int i=0;
	while(dlink!=NULL)
	{
		i++;
		dlink=dlink->next;
	}
	return i;
}

