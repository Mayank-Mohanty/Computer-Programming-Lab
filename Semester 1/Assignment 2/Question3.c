/*Input two numbers and swap them without using 3rd variable.
Mayank Mohanty 25BCSG88 Section A1 Roll No.11*/
#include<stdio.h>
int main()
{
    int num1,num2;
    printf("\nEnter two numbers: ");
    scanf("%d%d",&num1,&num2);
    printf("\nBefore swapping: num1=%d, num2=%d",num1,num2);
    num1=num1+num2;
    num2=num1-num2;
    num1=num1-num2;
    printf("\nAfter swapping: num1=%d, num2=%d",num1,num2);
    return 0;
}