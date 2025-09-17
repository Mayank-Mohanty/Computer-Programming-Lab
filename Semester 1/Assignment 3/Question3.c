/*Check whether an entered character is a vowel or consonant.
Mayank Mohanty 25BCSG88 Section A1 Roll No.11*/
#include<stdio.h>
int main()
{
    char a;
    printf("\nEnter a character: ");
    scanf("%c",&a);
    if (a=='a'||a=='e'||a=='i'||a=='o'||a=='u'||a=='A'||a=='E'||a=='I'||a=='O'||a=='U')
        printf("\nCharacter is vowel");
    else
        printf("\nCharacter is consonant");
    return 0;
}