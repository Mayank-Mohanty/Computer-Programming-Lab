/*Find gross salary of an employee, input basic salary, DA is 60% and HRA is 15% of basic salary. Gross salary=basic salary+DA+HRA.
Mayank Mohanty 25BCSG88 Section A1 Roll No.11*/
#include<stdio.h>
int main()
{
    float base,da,hra,gross;
    printf("\nEnter Basic Salary: ");
    scanf("%f",&base);
    da=0.6*base;
    hra=0.15*base;
    gross=base+da+hra;
    printf("\nGross Salary=%f",gross);
    return 0;
}