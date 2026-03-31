/*WAMDP for double circular linked list.
Mayank Mohanty 25BCSG88 Section A1 11 */
#include<stdio.h>
#include<stdlib.h>
struct node
{
    int info;
    struct node *next,*prev;
};
struct node *newstart;
void createlist(struct node*);
void traverse(struct node*);
void insert_beg(struct node*);
void insert_end(struct node*);
void insert_loc(struct node*);
void delete_beg(struct node*);
void delete_end(struct node*);
void delete_loc(struct node*);
int count(struct node*);
int main()
{
    struct node *start;
    int ch=1;
    start=(struct node*)malloc(sizeof(struct node));
    if(start==NULL)
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
    while(ch!=8)
    {
        printf("\nEnter your choice: ");
        scanf("%d",&ch);
        switch(ch)
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
    struct node *mdlink=dlink;
    int i=1;
    char ch;
    printf("\nEnter element for node %d: ",i);
    scanf("%d",&dlink->info);
    dlink->next=dlink;
    dlink->prev=dlink;
    i++;
    printf("\nAdd another node Y/N: ");
    scanf(" %c",&ch);
    while(ch!='N')
    {
        struct node *temp=(struct node*)malloc(sizeof(struct node));
        if(temp==NULL)
        {
            printf("\nOut of memory\n");
            return;
        }
        printf("\nEnter element for node %d: ",i);
        scanf("%d",&temp->info);
        temp->next=mdlink;
        temp->prev=dlink;
        dlink->next=temp;
        mdlink->prev=temp;
        dlink=temp;
        i++;
        printf("\nAdd another node Y/N: ");
        scanf(" %c",&ch);
    }
}
void traverse(struct node *dlink)
{
    struct node *mdlink=dlink;
    if(dlink==NULL)
    {
        printf("\nList is empty\n");
        return;
    }
    printf("\nElements are: ");
    do
    {
        printf("%d ",dlink->info);
        dlink=dlink->next;
    }while(dlink!=mdlink);
}
void insert_beg(struct node *dlink)
{
    struct node *cur=(struct node*)malloc(sizeof(struct node));
    struct node *last=dlink->prev;
    printf("\nEnter element: ");
    scanf("%d",&cur->info);
    cur->next=dlink;
    cur->prev=last;
    last->next=cur;
    dlink->prev=cur;
    newstart=cur;
}
void insert_end(struct node *dlink)
{
    struct node *cur=(struct node*)malloc(sizeof(struct node));
    struct node *last=dlink->prev;
    printf("\nEnter element: ");
    scanf("%d",&cur->info);
    cur->next=dlink;
    cur->prev=last;
    last->next=cur;
    dlink->prev=cur;
}
void insert_loc(struct node *dlink)
{
    int LOC,i=1,C;
    struct node *cur,*temp;
    printf("\nEnter location: ");
    scanf("%d",&LOC);
    C=count(dlink);
    if(LOC>C)
    {
        printf("\nInvalid Location\n");
        return;
    }
    cur=(struct node*)malloc(sizeof(struct node));
    printf("\nEnter element: ");
    scanf("%d",&cur->info);
    if(LOC==1)
    {
        insert_beg(dlink);
        return;
    }
    temp=dlink;
    while(i<LOC-1)
    {
        temp=temp->next;
        i++;
    }
    cur->next=temp->next;
    cur->prev=temp;
    temp->next->prev=cur;
    temp->next=cur;
}
void delete_beg(struct node *dlink)
{
    if(dlink->next==dlink)
    {
        free(dlink);
        newstart=NULL;
        return;
    }
    struct node *last=dlink->prev;
    struct node *temp=dlink;
    last->next=dlink->next;
    dlink->next->prev=last;
    newstart=dlink->next;
    free(temp);
}
void delete_end(struct node *dlink)
{
    if(dlink->next==dlink)
    {
        free(dlink);
        newstart=NULL;
        return;
    }
    struct node *last=dlink->prev;
    struct node *secondLast=last->prev;
    secondLast->next=dlink;
    dlink->prev=secondLast;
    free(last);
}
void delete_loc(struct node *dlink)
{
    int LOC,i=1,C;
    printf("\nEnter location: ");
    scanf("%d",&LOC);
    C=count(dlink);
    if(LOC>C)
    {
        printf("\nInvalid Location\n");
        return;
    }
    if(LOC==1)
    {
        delete_beg(dlink);
        return;
    }
    struct node *temp=dlink;
    while(i<LOC)
    {
        temp=temp->next;
        i++;
    }
    temp->prev->next=temp->next;
    temp->next->prev=temp->prev;
    free(temp);
}
int count(struct node *dlink)
{
    int i=1;
    struct node *mdlink=dlink;
    while(dlink->next!=mdlink)
    {
        i++;
        dlink=dlink->next;
    }
    return i;
}
