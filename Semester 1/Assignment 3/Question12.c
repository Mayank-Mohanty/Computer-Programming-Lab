/*Input A, B, C of Ax^2+Bx+C=0 and display roots of the equation upto 3 decimal places.
Mayank Mohanty 25BCSG88 Section A1 Roll No.11*/
#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,r1,r2,d;
    printf("\nEnter A, B, C of Ax^2+Bx+C=0: ");
    scanf("%f%f%f",&a,&b,&c);
    d=(b*b)-(4*a*c);
    if (d>0)
    {
        r1=(-b+sqrt(d))/(2*a);
        r2=(-b-sqrt(d))/(2*a);
        printf("\nTwo real and distinct roots r1=%.3f r2=%.3f",r1,r2);
    }
    else if (d==0)
    {
        r1=-b/(2*a);
        printf("\nOne real repeated root r=%.3f",r1);
    }
    else
    {
        printf("\nNo real roots as b^2-4ac < 0");
    }
    return 0;
}