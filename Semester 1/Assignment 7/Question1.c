/*Read a string and display it.
Mayank Mohanty 25BCSG88 Section A1 Roll No.11*/
#include<stdio.h>
int main()
{
    char str[20];
    printf("\nEnter a string: ");
    scanf("%[^\n]",str);
    printf("\nThe string is: %s",str);
    return 0;
}