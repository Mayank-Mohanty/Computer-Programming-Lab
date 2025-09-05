/*Input 3 sides of a triangle and display area.
Mayank Mohanty 25BCSG88 Section A1 Roll No.11*/
#include<stdio.h>
#include<math.h>
int main()
{
    float s1,s2,s3,s,area;
    printf("\nEnter 3 sides of a triangle: ");
    scanf("%f%f%f",&s1,&s2,&s3);
    s=(s1+s2+s3)/2.0;
    area=sqrt(s*(s-s1)*(s-s2)*(s-s3));
    printf("\nArea=%f",area);
    return 0;
}