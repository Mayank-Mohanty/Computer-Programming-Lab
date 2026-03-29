/*WAMDP for single linked list.
 Mayank Mohanty 25BCSG88 Section A1 11*/
#include<stdio.h>
#include<malloc.h>
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
void search(struct node *,int );
void sort(struct node *);
void reverse(struct node *);
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
		"\n8.Searching"
		"\n9.Sorting"
		"\n10.Reversing"
		"\n11.Exit");
	while (ch!=11)
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
			case 8: printf("\nEnter element to search: ");
				scanf("%d",&key);
				search(start,key);
				break;
			case 9: sort(start);
				break;
			case 10: reverse(start);
				 start=newstart;
				 break;
			case 11: break;
			default: printf("\nWrong Input\n");
		}
	}
	return 0;
}
void createlist(struct node *link)
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
		printf("%d ",ptr->info);
		ptr=ptr->next;
	}
}
void insert_loc(struct node *link)
{
	struct node *prev,*cur;
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
	while (i<LOC)
	{
		prev=link;
		link=link->next;
		i++;
	}
	if (LOC==1)
	{
		cur->next=link;
		newstart=cur;
	}
	else
	{
		prev->next=cur;
		cur->next=link;
	}
}
void delete_beg(struct node *link)
{
	newstart=link->next;
	free(link);
}
void delete_end(struct node *link)
{
	struct node *prev;
	if (link->next==NULL)
	{
		newstart=NULL;
		free(link);
		return ;
	}
	while (link->next!=NULL)
	{
		prev=link;
		link=link->next;
	}
	prev->next=NULL;
	free(link);
}
void delete_loc(struct node *link)
{
	struct node *prev;
	int LOC,C,i=1;
	printf("\nEnter location: ");
	scanf("%d",&LOC);
	C=count(link);
	if (LOC>C)
	{
		printf("\nInvalid Location\n");
		return ;
	}
	while (i<LOC)
	{
		prev=link;
		link=link->next;
		i++;
	}
	if (LOC==1)
	{
		newstart=link->next;
		free(link);
	}
	else
	{
		prev->next=link->next;
		free(link);
	}
}
void search(struct node *link,int key)
{
	int i=1;
	while (link!=NULL)
	{
		if (link->info==key)
		{
			printf("\n%d is found at node %d",key,i);
			return ;
		}
		i++;
		link=link->next;
	}
	printf("%d is not found",key);
}
void sort(struct node *link)
{
	struct node *p,*q;
	int temp;
	for (p=link;p->next!=NULL;p=p->next)
	{
		for (q=p->next;q!=NULL;q=q->next)
		{
			if (p->info>q->info)
			{
				temp=p->info;
				p->info=q->info;
				q->info=temp;
			}
		}
	}
}
void insert_beg(struct node *link)
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
	cur->next=link;
	newstart=cur;
}
void insert_end(struct node *link)
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
	 cur->next=NULL;
	 while (link->next!=NULL)
		 link=link->next;
	 link->next=cur;
}
void reverse(struct node *link)
{
	struct node *prev=NULL,*ptr;
	while (link!=NULL)
	{
		ptr=link->next;
		link->next=prev;
		prev=link;
		link=ptr;
	}
	newstart=prev;
}
int count (struct node *link)
{
	int i=0;
	while (link!=NULL)
	{
		i++;
		link=link->next;
	}
	return i;
}

