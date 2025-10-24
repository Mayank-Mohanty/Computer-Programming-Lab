/*Accepts number when choice is 'y' and displays sum of all inputted numbers when choice is 'n'.
Mayank Mohanty 25BCSG88 Section A1 Roll No.11*/
#include<stdio.h>
int main()
{
    int num,sum=0;
    char ch='y';
    while (ch=='y')
    {
        printf("\nEnter a number: ");
        scanf("%d",&num);
        sum+=num;
        printf("\nDo you want to enter more numbers (y/n): ");
        scanf(" %c",&ch);
    }
    printf("\nSum=%d",sum);
    return 0;
}