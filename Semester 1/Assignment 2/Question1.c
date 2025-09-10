/*Input two numbers and find their sum, difference, multiplication, division and modulus then display in mathematical format.
Mayank Mohanty 25BCSG88 Section A1 Roll No.11*/
#include<stdio.h>
int main()
{
    int num1, num2;
    printf("\nEnter two numbers: ");
    scanf("%d%d",&num1,&num2);
    printf("\n%d+%d=%d",num1,num2,num1+num2);
    printf("\n%d-%d=%d",num1,num2,num1-num2);
    printf("\n%d*%d=%d",num1,num2,num1*num2);
    printf("\n%d/%d=%d",num1,num2,num1/num2);
    printf("\n%d%%%d=%d",num1,num2,num1%num2);
    return 0;
}