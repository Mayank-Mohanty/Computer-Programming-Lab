/*Sort a list of strings lexicographically.
Mayank Mohanty 25BCSG88 Section A1 Roll No.11*/
#include <stdio.h>
int main()
{
    int n,i,j,k,min_index;
    char str[10][20],temp[20];
    printf("\nEnter number of strings: ");
    scanf("%d",&n);
    printf("\nEnter the strings:\n");
    for (i=0;i<n;i++)
        scanf(" %s",str[i]);
    for (i=0;i<n-1;i++)
    {
        min_index=i;
        for (j=i+1;j<n;j++)
        {
            for (k=0;str[min_index][k]!='\0' && str[j][k]!='\0' && str[min_index][k]==str[j][k];k++);
            if (str[j][k]<str[min_index][k])
                min_index=j;
        }
        if (min_index!=i)
        {
            for (k=0;str[i][k]!='\0';k++)
                temp[k]=str[i][k];
            temp[k]='\0';
            for (k=0;str[min_index][k]!='\0';k++)
                str[i][k]=str[min_index][k];
            str[i][k]='\0';
            for (k=0;temp[k]!='\0';k++)
                str[min_index][k]=temp[k];
            str[min_index][k]='\0';
        }
    }
    printf("\nSorted strings:\n");
    for (i=0;i<n;i++)
        printf("%s ",str[i]);
    return 0;
}
