/*Replace one character by another character in a string.
Mayank Mohanty 25BCSG88 Section A1 Roll No.11*/
#include<stdio.h>
int main()
{
    char str[20],key,rep;
    int i;
    printf("\nEnter a string: ");
    scanf("%[^\n]",str);
    printf("\nEnter character to replace and replacing character: ");
    scanf(" %c %c",&key,&rep);
    for (i=0;str[i]!='\0';i++)
    {
        if (str[i]==key)
            str[i]=rep;
    }
    printf("\nNew string: %s",str);
    return 0;
}