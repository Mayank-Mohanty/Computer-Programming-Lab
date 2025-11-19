/*Read a string and count the number of words, spaces, punctuations in it.
Mayank Mohanty 25BCSG88 Section A1 Roll No.11*/
#include<stdio.h>
int main()
{
    char str[20];
    int i,words=0,spaces=0,punc=0;
    printf("\nEnter a string: ");
    scanf("%[^\n]",str);
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]==' ')
            spaces++;
        else if(str[i]=='.' || str[i]==',' || str[i]=='!' || str[i]=='?' || str[i]==';' || str[i]==':')
            punc++;
    }
    if(str[0]!=' ' && str[0]!='\n')
        words=1;
    for(i=0;str[i]!='\0';i++)
        if(str[i]==' ' && str[i+1]!=' ' && str[i+1]!='\0' && str[i+1]!='\n')
            words++;
    printf("\nWords=%d",words);
    printf("\nSpaces=%d",spaces);
    printf("\nPunctuations=%d",punc);
    return 0;
}
