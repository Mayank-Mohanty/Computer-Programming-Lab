/*Input a line of text and show the ASCII values of characters.
Mayank Mohanty 25BCSG88 Section A1 Roll No.11*/
#include<stdio.h>
int main()
{
    char str[20];
    int i;
    printf("\nEnter a string: ");
    scanf("%[^\n]",str);
    printf("\nASCII values of the string: ");
    for (i=0;str[i]!='\0';i++)
        printf("%d ",str[i]);
    return 0;
}