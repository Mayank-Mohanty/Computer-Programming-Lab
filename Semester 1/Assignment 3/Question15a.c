/*Input average marks and show respective grades using else if ladder.
Mayank Mohanty 25BCSG88 Section A1 Roll No.11*/
#include<stdio.h>
int main() 
{
    int avg;
    printf("\nEnter average marks: ");
    scanf("%d", &avg);
    if (avg >= 90 && avg <= 100)
        printf("\nGrade: O");
    else if (avg >= 80)
        printf("\nGrade: E");
    else if (avg >= 70)
        printf("\nGrade: A");
    else if (avg >= 60)
        printf("\nGrade: B");
    else if (avg >= 50)
        printf("\nGrade: C");
    else
        printf("\nGrade: F");
    return 0;
}