/*Read a string and change the case of characters.
Mayank Mohanty 25BCSG88 Section A1 Roll No.11*/
#include<stdio.h>
int main()
{
    char str[20];
    int i;
    printf("\nEnter a string: ");
    scanf("%[^\n]",str);
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]>='a' && str[i]<='z')
            str[i]=str[i]-32;
        else if(str[i]>='A' && str[i]<='Z')
            str[i]=str[i]+32;
    }
    printf("\nNew string: %s",str);
    return 0;
}
