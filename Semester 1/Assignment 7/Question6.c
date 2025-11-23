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
        else if((str[i]>=33 && str[i]<=47) || (str[i]>=58 && str[i]<=64) || (str[i]>=91 && str[i]<=96) || (str[i]>=123 && str[i]<=126))
            punc++;
        if ((str[i]!=' ') && (i==0 || str[i-1]==' '))
            words++;
    }
    printf("\nWords=%d",words);
    printf("\nSpaces=%d",spaces);
    printf("\nPunctuations=%d",punc);
    return 0;
}
