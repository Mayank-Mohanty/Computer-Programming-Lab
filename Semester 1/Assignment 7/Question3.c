/*Copy one string into another string.
Mayank Mohanty 25BCSG88 Section A1 Roll No.11*/
#include<stdio.h>
int main()
{
    char str1[20],str2[20];
    int i;
    printf("\nEnter 1st string: ");
    scanf("%[^\n]",str1);
    printf("\nEnter 2nd string: ");
    scanf(" %[^\n]",str2);
    for (i=0;str1[i]!='\0';i++)
        str2[i]=str1[i];
    str2[i]='\0';
    printf("\n2nd string is: %s",str2);
    return 0;
}