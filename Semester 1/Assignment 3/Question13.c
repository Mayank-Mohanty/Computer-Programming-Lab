/*Input balance in bank and give bonus 5% to everyone and additional 10% to females if balance is greater than 10000 and display new balance.
Mayank Mohanty 25BCSG88 Section A1 Roll No.11*/
#include<stdio.h>
int main ()
{
    char gen;
    float bal,bonus,add_bonus,nbal;
    printf("\nEnter Gender (M/F): ");
    scanf("%c",&gen);
    printf("\nEnter balance: ");
    scanf("%f",&bal);
    bonus=0.05*bal;
    nbal=bal+bonus;
    if (gen=='F' && bal>10000)
    {
        add_bonus=0.1*bal;
        nbal+=add_bonus;
    }
    printf("\nNew balance= %f",nbal);
    return 0;
}