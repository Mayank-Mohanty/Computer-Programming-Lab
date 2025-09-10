/*Initialise Temp. in Fahrenheit and convert it into Celsius.
Mayank Mohanty 25BCSG88 Section A1 Roll No.11*/
#include<stdio.h>
int main()
{
    float f,c;
    printf("\nEnter Temp. in Fahrenheit: ");
    scanf("%f",&f);
    c=((f-32)/9.0)*5;
    printf("\nTemp. in Celsius=%f",c);
    return 0;
}