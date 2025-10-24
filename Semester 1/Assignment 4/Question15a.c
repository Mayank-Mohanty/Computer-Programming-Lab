/*Input a decimal number and convert it to binary.
Mayank Mohanty 25BCSG88 Section A1 Roll No.11*/
#include<stdio.h>
int main()
{
    int decimal,binary=0,place=1,rem;
    printf("\nEnter decimal number: ");
    scanf("%d",&decimal);
    while (decimal!=0)
    {
        rem=decimal%2;
        binary=binary+rem*place;
        place*=10;
        decimal/=2;
    }
    printf("\nBinary Equivalent=%d",binary);
    return 0;
}