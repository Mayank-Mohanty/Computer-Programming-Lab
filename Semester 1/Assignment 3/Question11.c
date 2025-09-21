/*Input a year and check whether it is a leap year or not.
Mayank Mohanty 25BCSG88 Section A1 Roll No.11*/
#include<stdio.h>
int main()
{
    int year;
    printf("\nEnter a year: ");
    scanf("%d",&year);
    if ((year%400==0)||(year%4==0 && year%100!=0))
        printf("\nIt is a leap year");
    else
        printf("\nIt is not a leap year");
    return 0;
}