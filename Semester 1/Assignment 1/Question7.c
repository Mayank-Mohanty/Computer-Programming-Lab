/*Initialise 2 values then swap and display them.
Mayank Mohanty 25BCSG88 Section A1 Roll No.11*/
#include<stdio.h>
int main()
{
    int num1=5,num2=7,temp;
    printf("\nBefore Swapping num1=%d num2=%d",num1,num2);
    temp=num2;
    num2=num1;
    num1=temp;
    printf("\nAfter Swapping num1=%d num2=%d",num1,num2);
    return 0;
}