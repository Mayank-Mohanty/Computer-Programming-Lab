/*Enter 3 sides of a triangle and check whether triangle is valid or not using conditional operator.
Mayank Mohanty 25BCSG88 Section A1 Roll No.11*/
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("\nEnter three sides of a triangle: ");
    scanf("%d%d%d",&a,&b,&c);
    (a+b>c && a+c>b && b+c>a)?printf("\nTriangle is valid"):printf("\nTriangle is not valid");
    return 0;
}