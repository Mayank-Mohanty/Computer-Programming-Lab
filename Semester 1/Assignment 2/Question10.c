/*Convert degree to radian and vice-versa.
Mayank Mohanty 25BCSG88 Section A1 Roll No.11*/
#include<stdio.h>
int main()
{
    float d1,d2,r1,r2;
    printf("\nEnter degree: ");
    scanf("%f",&d1);
    r1=d1/180;
    printf("\n%f degree will be %fpi radian",d1,r1);
    printf("\nEnter radian (Coeeficient of pi): ");
    scanf("%f",&r2);
    d2=r2*180;
    printf("\n%fpi radian will be %f degree",r2,d2);
    return 0;
}