/*Swap two strings.
Mayank Mohanty 25BCSG88 Section A1 Roll No.11*/
#include<stdio.h>
int main()
{
    char str1[20],str2[20],temp[20];
    int i;
    printf("\nEnter 1st string: ");
    scanf("%[^\n]",str1);
    printf("\nEnter 2nd string: ");
    scanf(" %[^\n]",str2);
    for(i=0;str1[i]!='\0';i++)
        temp[i]=str1[i];
    temp[i]='\0';
    for(i=0;str2[i]!='\0';i++)
        str1[i]=str2[i];
    str1[i]='\0';
    for(i=0;temp[i]!='\0';i++)
        str2[i]=temp[i];
    str2[i]='\0';
    printf("\nAfter swapping:");
    printf("\n1st string= %s",str1);
    printf("\n2nd string= %s",str2);
    return 0;
}
