#include<stdio.h>
#include<stdlib.h>
struct node 
{
    int coeff;
    int exp;
    struct node *next;
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
    return 0;
}
void createlist(struct node *link)
{
    int i=1;
    char ch;
    printf("\nEnter coefficient and exponent for term %d: ", i);
    scanf("%d%d",&link->coeff,&link->exp);
    link->next=NULL;
    i++;
    printf("\nDo you want to add another term Y/N: ");
    scanf(" %c",&ch);
    while (ch!='N')
    {
        link->next=(struct node*)malloc(sizeof(struct node));
        if (link->next==NULL)
        {
            printf("\nOut of memory\n");
            return;
        }
        link=link->next;
        printf("\nEnter coefficient and exponent for term %d: ", i);
        scanf("%d%d",&link->coeff,&link->exp);
        link->next=NULL;
        i++;
        printf("\nDo you want to add another term Y/N: ");
        scanf(" %c",&ch);
    }
}
void traverse(struct node *link)
{
    if (link==NULL)
    {
        printf("\nPolynomial is empty\n");
        return;
    }
    printf("\nPolynomial: ");
    while (link!=NULL)
    {
        printf("%dx^%d",link->coeff,link->exp);
        if (link->next!=NULL)
            printf(" + ");
        link=link->next;
    }
}