/*Input side of a square and display radius of a circle whose area is same as that of the square.
Mayank Mohanty 25BCSG88 Section A1 Roll No.11*/
#include<stdio.h>
#include<math.h>
int main()
{
    float sq_side, sq_area, r;
    printf("\nEnter the side of the square: ");
    scanf("%f",&sq_side);
    sq_area=sq_side*sq_side;
    r=sqrt(sq_area/3.14);
    printf("\nRadius of the circle with same area=%f",r);
    return 0;
}