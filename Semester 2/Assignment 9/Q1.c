/*WAMDP for single circular linked list.
 Mayank Mohanty 25BCSG88 Section A1 11*/
#include<stdio.h>
#include<stdlib.h>
struct node
{
	int info;
	struct node *next;
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
int count (struct node *);
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
void createlist(struct node *link)
{
	struct node *mlink;
	mlink=link;
	int i=1;
	char ch;
	printf("\nEnter element for node %d: ",i);
	scanf("%d",&link->info);
	link->next=mlink;
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
		link->next=mlink;
		i++;
		printf("\nDo you want to add another node Y/N: ");
		scanf(" %c",&ch);
	}
}
void traverse(struct node *link)
{
	struct node *mlink;
	mlink=link;
	if (link==NULL)
	{
		printf("\nLinked List is empty\n");
		return ;
	}
	printf("\nElements are: ");
	do
	{
		printf("%d ",link->info);
		link=link->next;
	}while (link!=mlink);
}
void insert_loc(struct node *link)
{
	struct node *temp,*cur,*mlink;
	int LOC,C,i=1;
	printf("\nEnter location: ");
	scanf("%d",&LOC);
	C=count(link);
	if (LOC>C)
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
	mlink=link;
	if (LOC==1)
	{
		cur->next=link;
		newstart=cur;
		while (link->next!=mlink)
			link=link->next;
		link->next=cur;
		return;
	}
	while (i<LOC)
	{
		temp=link;
		link=link->next;
		i++;
	}
	temp->next=cur;
	cur->next=link;
}
void delete_beg(struct node *link)
{
	struct node *mlink;
	mlink=link;
	if (link->next==mlink)
	{
		newstart=NULL;
		free(link);
		return ;
	}
	while (link->next!=mlink)
		link=link->next;
	link->next=mlink->next;
	newstart=mlink->next;
	free(mlink);
}
void delete_end(struct node *link)
{
	struct node *mlink,*temp;
	mlink=link;
	if (link->next==mlink)
	{
		newstart=NULL;
		free(link);
		return ;
	}
	while (link->next!=mlink)
	{
		temp=link;
		link=link->next;
	}
	temp->next=mlink;
	free(link);
}
void delete_loc(struct node *link)
{
	struct node *prev,*mlink;
	int LOC,C,i=1;
	mlink=link;
	printf("\nEnter location: ");
	scanf("%d",&LOC);
	C=count(link);
	if (LOC>C)
	{
		printf("\nInvalid Location\n");
		return ;
	}
	if (LOC==1)
	{
		while (link->next!=mlink)
			link=link->next;
		link->next=mlink->next;
	        newstart=mlink->next;
	        free(mlink);
			return ;	
	}
	while (i<LOC)
	{
		prev=link;
		link=link->next;
		i++;
	}
	prev->next=link->next;
	free(link);
}
void insert_beg(struct node *link)
{
	struct node *cur,*mlink;
	cur=(struct node *)malloc(sizeof(struct node));
	if (cur==NULL)
	{
		printf("\nOut of memory\n");
		return ;
	}
	printf("\nEnter element: ");
	scanf("%d",&cur->info);
	cur->next=link;
	newstart=cur;
	mlink=link;
	while (link->next!=mlink)
		link=link->next;
	link->next=cur;
}
void insert_end(struct node *link)
{
	struct node *cur,*mlink;
	cur=(struct node *)malloc(sizeof(struct node));
	if (cur==NULL)
	{
		printf("\nOut of memory\n");
		return ;
	}
	printf("\nEnter element: ");
	scanf("%d",&cur->info);
	cur->next=link;
	mlink=link;
	while (link->next!=mlink)
		link=link->next;
	link->next=cur;
}
int count (struct node *link)
{
	struct node *mlink;
	int i=1;
	mlink=link;
	while (link->next!=mlink)
	{
		i++;
		link=link->next;
	}
	return i;
}

