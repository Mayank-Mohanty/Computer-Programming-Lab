/*Enter total purchase amount and calculate the amount payable after discount, less than Rs.1000 no discount, Rs.1000-3000 5%, Rs.3001-6000 7%, Rs.6001-10000 10%, more than Rs.10000 Rs.2000 discount.
Mayank Mohanty 25BCSG88 Section A1 Roll No.11*/
#include<stdio.h>
int main() 
{
    float amount,dis,payable;
    printf("\nEnter total purchase amount: ");
    scanf("%f",&amount);
    if (amount<1000)
        dis=0;
    else if (amount<=3000)
        dis=amount*0.05;
    else if (amount<=6000)
        dis=amount*0.07;
    else if (amount<=10000)
        dis=amount*0.1;
    else
        dis=2000;
    payable=amount-dis;
    printf("\nTotal Purchase Amount: %.2f",amount);
    printf("\nDiscount Applied: %.2f",dis);
    printf("\nAmount Payable: %.2f",payable);
    return 0;
}