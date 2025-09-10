/*Input marks of a student in 5 subjects out of 100 each and display percentage secured.
Mayank Mohanty 25BCSG88 Section A1 Roll No.11*/
#include<stdio.h>
int main()
{
    float m1,m2,m3,m4,m5,percentage;
    printf("\nInput marks in 5 subjects: ");
    scanf("%f%f%f%f%f",&m1,&m2,&m3,&m4,&m5);
    percentage=(m1+m2+m3+m4+m5)/5.0;
    printf("Percentage=%f",percentage);
    return 0;
}