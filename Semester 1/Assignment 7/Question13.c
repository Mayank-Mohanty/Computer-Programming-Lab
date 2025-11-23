/*Input first, middle, last name as 3 strings and then output in short initials.
Mayank Mohanty 25BCSG88 Section A1 Roll No.11*/
#include<stdio.h>
int main()
{
    char first[20],middle[20],last[20];
    printf("\nEnter first name: ");
    scanf(" %s",first);
    printf("\nEnter middle name(or - to skip): ");
    scanf(" %s",middle);
    printf("\nEnter last name: ");
    scanf(" %s",last);
    if (middle[0]!='-')
        printf("\nInitials: %c.%c.%c",first[0],middle[0],last[0]);
    else
        printf("\nInitials: %c.%c",first[0],last[0]);
    return 0;
}
