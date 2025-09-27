/*Input 3 sides of a triangle and check whether it is isosceles,scalene,equilateral or right angled triangle.
Mayank Mohanty 25BCSG88 Section A1 Roll No.11*/
#include<stdio.h>
int main ()
{
    float a,b,c;
    printf("\nEnter three sides of a triangle: ");
    scanf("%f%f%f",&a,&b,&c);
    if (a+b>c && a+c>b && b+c>a)
    {
        if (a==b && b==c)
            printf("\nThe triangle is equilateral");
        else if (a==b || a==c || b==c)
            printf("\nThe triangle is isosceles");
        else
            printf("\nThe triangle is scalene");
        if (a*a+b*b==c*c || a*a+c*c==b*b || b*b+c*c==a*a)
            printf("\nThe triangle is also right angled");
    }
    else
        printf("\nTriangle is not valid");
    return 0;
}