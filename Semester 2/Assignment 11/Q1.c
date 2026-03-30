/*WAMDP for QUEUE implemented using linked list.
 Mayank Mohanty 25BCSG88 Section A1 11*/
#include<stdio.h>
#include<stdlib.h>
struct node
{
    int info;
    struct node *next;
};
typedef struct node * QUEUE;
QUEUE INSERT(QUEUE , QUEUE , int );
QUEUE DELETE(QUEUE , QUEUE );
void TRAVERSE(QUEUE);
int main()
{
    QUEUE FRONT=NULL,REAR=NULL;
    int ch=1,item;
    printf("\nMenu:"
           "\n1.INSERT"
           "\n2.DELETE"
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
                    REAR=INSERT(FRONT,REAR,item);
                    if (FRONT==NULL)
                        FRONT=REAR;
                    break;
            case 2: FRONT=DELETE(FRONT,REAR);
                    if (FRONT==NULL)
                        REAR=NULL;
                    break;
            case 3: TRAVERSE(FRONT);
                    break;
            case 4: break;
            default: printf("\nInvalid Input\n");
        }
    }
    return 0;
}
QUEUE INSERT(QUEUE FRONT,QUEUE REAR,int item)
{
    QUEUE temp;
    temp=(QUEUE)malloc(sizeof(struct node));
    if (temp==NULL)
    {
        printf("\nOut of memory\n");
        return REAR;
    }
    temp->info=item;
    temp->next=NULL;
    if (REAR==NULL)
    {
        return temp;
    }
    REAR->next = temp;
    return temp;
}
QUEUE DELETE(QUEUE FRONT, QUEUE REAR)
{
    QUEUE temp;
    if (FRONT==NULL)
    {
        printf("\nQueue Underflow\n");
        return FRONT;
    }
    temp=FRONT;
    printf("\nDeleted element is %d", FRONT->info);
    FRONT=FRONT->next;
    free(temp);
    return FRONT;
}
void TRAVERSE(QUEUE FRONT)
{
    if (FRONT==NULL)
    {
        printf("\nQueue Empty\n");
        return;
    }
    printf("\nQueue elements are: ");
    while (FRONT!=NULL)
    {
        printf("%d ", FRONT->info);
        FRONT=FRONT->next;
    }
}
