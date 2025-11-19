/*Input a string and find its length.
Mayank Mohanty 25BCSG88 Section A1 Roll No.11*/
#include<stdio.h>
int main()
{
    char str[20];
    int ctr;
    printf("\nEnter a string: ");
    scanf("%[^\n]",str);
    for (ctr=0;str[ctr]!='\0';ctr++);
    printf("\nThe length of string is: %d",ctr);
    return 0;
}