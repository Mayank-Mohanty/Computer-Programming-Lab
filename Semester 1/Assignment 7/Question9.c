/*Input two strings and concatenate.
Mayank Mohanty 25BCSG88 Section A1 Roll No.11*/
#include<stdio.h>
int main()
{
    char str1[20],str2[20];
    int i,j;
    printf("\nEnter 1st string: ");
    scanf("%[^\n]",str1);
    printf("\nEnter 2nd string: ");
    scanf(" %[^\n]",str2);
    for(i=0;str1[i]!='\0';i++);
    for(j=0;str2[j]!='\0';j++)
        str1[i+j]=str2[j];
    str1[i+j]='\0';
    printf("\nConcatenated string: %s",str1);
    return 0;
}
