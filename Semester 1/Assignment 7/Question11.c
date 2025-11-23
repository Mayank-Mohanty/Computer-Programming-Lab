/*Input a string and reverse it.
Mayank Mohanty 25BCSG88 Section A1 Roll No.11*/
#include<stdio.h>
int main()
{
    char str1[20],str2[20];
    int i,len;
    printf("\nEnter string: ");
    scanf("%[^\n]",str1);
    for(len=0;str1[len]!='\0';len++);
    for(i=0;i<len;i++)
        str2[i]=str1[len-1-i];
    str2[i]='\0';
    printf("\nReverse string= %s",str2);
    return 0;
}
