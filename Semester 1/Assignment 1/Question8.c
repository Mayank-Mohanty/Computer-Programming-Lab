/*Take 2 values from user then swap and display them.
Mayank Mohanty 25BCSG88 Section A1 Roll No.11*/
#include<stdio.h>
int main()
{
    int num1,num2,temp;
    printf("\nEnter 2 numbers: ");
    scanf("%d%d",&num1,&num2);
    printf("\nBefore Swapping num1=%d num2=%d",num1,num2);
    temp=num2;
    num2=num1;
    num1=temp;
    printf("\nAfter Swapping num1=%d num2=%d",num1,num2);
    return 0;
}