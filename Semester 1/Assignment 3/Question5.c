/*Find absolute value of a number using conditional operator.
Mayank Mohanty 25BCSG88 Section A1 Roll No.11*/
#include<stdio.h>
int main()
{
    int num,av;
    printf("\nEnter a number: ");
    scanf("%d",&num);
    av=(num>=0)?num:-num;
    printf("\nAbsolute value of %d is %d",num,av);
    return 0;
}