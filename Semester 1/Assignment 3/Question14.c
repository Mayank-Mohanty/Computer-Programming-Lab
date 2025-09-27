/*Calculate electricity bill if Rs.1 is charged for first 200 units,Rs.2 for next 100 units,Rs.3 for beyond 300 units,Rs.100 is meter charge, if total amount is more than 600 then additional surcharge of 15% of total amount is charged. Display consumer number and total bill.
Mayank Mohanty 25BCSG88 Section A1 Roll No.11*/
#include<stdio.h>
int main ()
{
    float cn,units,mc,ec,sc,total;
    printf("\nEnter consumer number: ");
    scanf("%f",&cn);
    printf("\nEnter units consumed: ");
    scanf("%f",&units);
    mc=100;
    if (units<200)
        ec=units*1;
    else if (units>200 && units<=300)
        ec=(units-200)*2+(200*1);
    else
        ec=(units-300)*3+(100*2)+(200*1);
    total=mc+ec;
    if (total>600)
    {
        sc=0.15*total;
        total+=sc;
    }
    printf("\nConsumer number= %f Total bill= %f",cn,total);
    return 0;
}