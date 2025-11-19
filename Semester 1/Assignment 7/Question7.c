/*Read a string and count the number of vowels, consonants, other characters in it.
Mayank Mohanty 25BCSG88 Section A1 Roll No.11*/
#include<stdio.h>
int main()
{
    char str[20];
    int i,v=0,c=0,o=0;
    printf("\nEnter a string: ");
    scanf("%[^\n]",str);
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
            v++;
        else if ((str[i]>=65 && str[i]<=90) || (str[i]>=97 && str[i]<=122))
            c++;
        else
            o++;
    }
    printf("\nVowels=%d",v);
    printf("\nConsonants=%d",c);
    printf("\nOther characters=%d",o);
    return 0;
}
