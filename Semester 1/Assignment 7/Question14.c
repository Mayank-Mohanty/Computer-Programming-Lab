/*Search for a substring in a line of text.
Mayank Mohanty 25BCSG88 Section A1 Roll No.11*/
#include <stdio.h>
int main()
{
    char str[50],sub[20];
    int i,j,found;
    printf("\nEnter the string: ");
    scanf(" %[^\n]",str);
    printf("\nEnter the substring: ");
    scanf(" %[^\n]",sub);
    for (i=0;str[i]!='\0';i++)
    {
        found=1;
        for (j=0;sub[j]!='\0';j++)
        {
            if (str[i+j]!=sub[j])
            {
                found=0;
                break;
            }
        }
        if (found==1)
        {
            printf("\nSubstring found");
            exit(0);
        }
    }
    printf("\nSubstring not found");
    return 0;
}
