/*Enter total purchase amount and calculate the amount payable after discount, less than Rs.1000 no discount, Rs.1000-3000 5%, Rs.3001-6000 7%, Rs.6001-10000 10%, more than Rs.10000 Rs.2000 discount.
Mayank Mohanty 25BCSG88 Section A1 Roll No.11*/
#include<stdio.h>
int main() 
{
    float amt,dis,pay;
    printf("\nEnter total purchase amount: ");
    scanf("%f",&amt);
    if (amt<1000)
        dis=0;
    else if (amt<=3000)
        dis=amt*0.05;
    else if (amt<=6000)
        dis=amt*0.07;
    else if (amt<=10000)
        dis=amt*0.1;
    else
        dis=2000;
    pay=amt-dis;
    printf("\nTotal Purchase Amount: %.2f",amt);
    printf("\nDiscount Applied: %.2f",dis);
    printf("\nAmount Payable: %.2f",pay);
    return 0;
}