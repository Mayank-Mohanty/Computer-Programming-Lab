/*Input a binary number and convert it to decimal.
Mayank Mohanty 25BCSG88 Section A1 Roll No.11*/
#include<stdio.h>
int main()
{
    int decimal=0,binary,base=1,rem;
    printf("\nEnter binary number: ");
    scanf("%d",&binary);
    while (binary!=0)
    {
        rem=binary%10;
        decimal=decimal+rem*base;
        base*=2;
        binary/=10;
    }
    printf("\nDecimal Equivalent=%d",decimal);
    return 0;
}