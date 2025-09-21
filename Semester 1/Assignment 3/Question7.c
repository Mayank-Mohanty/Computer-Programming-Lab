/*Enter 3 sides of a triangle and check whether triangle is isosceles or not using conditional operator.
Mayank Mohanty 25BCSG88 Section A1 Roll No.11*/
#include<stdio.h>
int main()
{
    float a,b,c;
    printf("\nEnter three sides of a triangle: ");
    scanf("%f%f%f",&a,&b,&c);
    if (a+b>c && a+c>b && b+c>a)
        (a==b||b==c||c==a)?printf("\nTriangle is isosceles"):printf("\nTriangle is not isosceles");
    else
        printf("\nTriangle is not valid");
    return 0;
}