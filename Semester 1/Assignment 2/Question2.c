/*Input CGPA and convert it into equivalent percentage.
Mayank Mohanty 25BCSG88 Section A1 Roll No.11*/
#include<stdio.h>
int main()
{
    float cgpa,percentage;
    printf("\nEnter CGPA: ");
    scanf("%f",&cgpa);
    percentage=(cgpa-0.5)*10;
    printf("\nPercentage= %f",percentage);
    return 0;
}