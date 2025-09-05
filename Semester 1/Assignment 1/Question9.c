/*Input radius value from user then find circumference and area and display them.
Mayank Mohanty 25BCSG88 Section A1 Roll No.11*/
#include<stdio.h>
int main()
{
    float r,cir,area;
    printf("\nEnter Radius of circle: ");
    scanf("%f",&r);
    cir=2*3.14*r;
    area=3.14*r*r;
    printf("\nCircumference=%f Area=%f",cir,area);
    return 0;
}