/*Calculate total bill by entering price and quantites of some products.
Mayank Mohanty 25BCSG88 Section A1 Roll No.11*/
#include<stdio.h>
int main()
{
    int p1,p2,q1,q2,tb;
    printf("\nEnter price and quantity of product 1: ");
    scanf("%d%d",&p1,&q1);
    printf("\nEnter price and quantity of product 2: ");
    scanf("%d%d",&p2,&q2);
    tb=(p1*q1)+(p2*q2);
    printf("\nTotal Bill= %d",tb);
    return 0;
}