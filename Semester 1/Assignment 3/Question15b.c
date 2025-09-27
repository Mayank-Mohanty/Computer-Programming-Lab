/*Input average marks and show respective grades using switch case.
Mayank Mohanty 25BCSG88 Section A1 Roll No.11*/
#include<stdio.h>
int main() 
{
    int marks,key;
    printf("\nEnter average marks: ");
    scanf("%d",&marks);
    key = marks/10;
    switch (key) 
    {
        case 10:
        case 9: printf("\nGrade: O"); break;
        case 8: printf("\nGrade: E"); break;
        case 7: printf("\nGrade: A"); break;
        case 6: printf("\nGrade: B"); break;
        case 5: printf("\nGrade: C"); break;
        default: printf("\nGrade: F");
    }
    return 0;
}