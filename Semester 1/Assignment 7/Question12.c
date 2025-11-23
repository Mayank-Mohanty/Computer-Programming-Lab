/*Input a string and check whether palindrome or not.
Mayank Mohanty 25BCSG88 Section A1 Roll No.11*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    char str[20];
    int i,len,mid;
    printf("\nEnter string: ");
    scanf("%[^\n]",str);
    for(len=0;str[len]!='\0';len++);
    mid=len/2;
    for(i=0;i<mid;i++)
    {
        if (str[i]!=str[len-1-i])
        {
            printf("\nNot a palindrome");
            exit(0);
        }
    }
    printf("\nIt is a palindrome");
    return 0;
}
