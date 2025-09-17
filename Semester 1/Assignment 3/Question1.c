/*Input a number and check whether it is even or odd.
Mayank Mohanty 25BCSG88 Section A1 Roll No.11*/
#include<stdio.h>
int main()
{
    int num;
    printf("\nEnter a number: ");
    scanf("%d",&num);
    if (num%2==0)
        printf("\nNumber is even");
    else
        printf("\nNumber is odd");
    return 0;
}