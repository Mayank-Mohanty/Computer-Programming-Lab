/*Change the case of entered alphabet.
Mayank Mohanty 25BCSG88 Section A1 Roll No.11*/
#include<stdio.h>
int main()
{
    char alph;
    printf("\nEnter an alphabet: ");
    scanf("%c",&alph);
    if (alph>=65 && alph<=90)
        alph+=32;
    else if (alph>=97 && alph<=122)
        alph-=32;
    else
        printf("\nNot an alphabet");
    printf("\nAfter case switching: %c",alph);
    return 0;
}