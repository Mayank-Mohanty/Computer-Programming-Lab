/*Input principal amount, time, rate of interest and display simple interest.
Mayank Mohanty 25BCSG88 Section A1 Roll No.11*/
#include<stdio.h>
int main()
{
    float pri,time,roi,si;
    printf("\nEnter Principal Amount, Time, Rate of Interest: ");
    scanf("%f%f%f",&pri,&time,&roi);
    si=(pri*time*roi)/100;
    printf("\nSimple Interest=%f",si);
    return 0;
}