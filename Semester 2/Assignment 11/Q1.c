/*WAMDP to implement a BST using linked list.
 Mayank Mohanty 25BCSG88 Section A1 11*/
#include<stdio.h>
#include<stdlib.h>
struct node
{
	struct node *left,*right;
	int info;
};
typedef struct node * bstnode;
bstnode insert(bstnode ,int );
bstnode findmin(bstnode);
bstnode findmax(bstnode);
bstnode delete(bstnode ,int );
bstnode search(bstnode , int );
void preorder(bstnode);
void inorder(bstnode);
void postorder(bstnode);
int main()
{
	bstnode t=NULL,temp;
	int x,ch=1;
	printf("\nMenu:"
		"\n1.Insert"
		"\n2.Findmin"
		"\n3.Findmax"
		"\n4.Delete"
		"\n5.Search"
		"\n6.Inorder Traversal"
		"\n7.Preorder Traversal"
		"\n8.Postorder Traversal"
		"\n9.Exit");
	while (ch!=9)
	{
		printf("\nEnter your choice: ");
		scanf("%d",&ch);
		switch (ch)
		{
			case 1: printf("\nEnter element to insert: ");
				scanf("%d",&x);
				t=insert(t,x);
				break;
			case 2: temp=findmin(t);
				printf("\nMin=%d",temp->info);
				break;
			case 3: temp=findmax(t);
				printf("\nMax=%d",temp->info);
				break;
			case 4: printf("\nEnter element to delete: ");
				scanf("%d",&x);
				t=delete(t,x);
				break;
			case 5: printf("\nEnter element to search: ");
				scanf("%d",&x);
				temp=search(t,x);
				if (temp!=NULL)
					printf("\nElement Found\n");
				else
					printf("\nElement Not Found\n");
				break;
			case 6: printf("\nElements are (Inorder): ");
				inorder(t);
				break;
			case 7: printf("\nElements are (Preorder): ");
				preorder(t);
				break;
			case 8: printf("\nElements are (Postorder): ");
				postorder(t);
				break;
			case 9: break;
			default: printf("\nInvalid Choice\n");
		}
	}
	return 0;
}
bstnode insert(bstnode t,int x)
{
	if (t==NULL)
	{
		t=(bstnode)malloc(sizeof(struct node));
		if (t==NULL)
		{
			printf("\nOut Of Memory\n");
			return t;
		}
		t->info=x;
		t->left=NULL;
		t->right=NULL;
	}
	else
	{
		if(x<t->info)
			t->left=insert(t->left,x);
		else
		{
			if (x>t->info)
				t->right=insert(t->right,x);
		}
	}
	return t;
}
bstnode search(bstnode t,int x)
{
	if (t==NULL)
		return NULL;
	if (x<t->info)
		return search(t->left,x);
	else if (x>t->info)
		return search(t->right,x);
	else
		return t;
}
bstnode findmin(bstnode t)
{
	if (t==NULL)
		return NULL;
	else if (t->left==NULL)
		return t;
	else
		return findmin(t->left);
}
bstnode findmax(bstnode t)
{
	if (t==NULL)
		return NULL;
	else if (t->right==NULL)
		return t;
	else
		return findmax(t->right);
}
void preorder(bstnode t)
{
	if (t!=NULL)
	{
		printf("%d ",t->info);
		preorder(t->left);
		preorder(t->right);
	}
}
void inorder(bstnode t)
{
	if (t!=NULL)
	{
		inorder(t->left);
		printf("%d ",t->info);
		inorder(t->right);
	}
}
void postorder(bstnode t)
{
	if (t!=NULL)
	{
		postorder(t->left);
		postorder(t->right);
		printf("%d ",t->info);
	}
}
bstnode delete(bstnode t,int x)
{
	bstnode temp;
	if (t==NULL)
		printf("%d is not found",x);
	else if (x<t->info)
		t->left=delete(t->left,x);
	else if (x>t->info)
		t->right=delete(t->right,x);
	else if (t->left && t->right)
	{
		temp=findmin(t->right);
		t->info=temp->info;
		t->right=delete(t->right,t->info);
	}
	else
	{
		temp=t;
		if (t->left==NULL)
			t=t->right;
		else if (t->right==NULL)
			t=t->left;
		free(temp);
	}
	return t;
}

