/*Input two number and display the greater one.
Mayank Mohanty 25BCSG88 Section A1 Roll No.11*/
#include<stdio.h>
int main()
{
    int num1,num2;
    printf("\nEnter two number: ");
    scanf("%d%d",&num1,&num2);
    if (num1>num2)
        printf("\n%d is greater",num1);
    else if (num1==num2)
        printf("\nBoth are equal");
    else
        printf("%d is greater",num2);
    return 0;
}