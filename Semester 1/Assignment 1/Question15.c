/*Check size of all predefined datatypes and display them, use sizeof() function.
Mayank Mohanty 25BCSG88 Section A1 Roll No.11*/
#include<stdio.h>
int main()
{
    printf("\nSize of int: %d bytes", sizeof(int));
    printf("\nSize of signed int: %d bytes", sizeof(signed int));
    printf("\nSize of unsigned int: %d bytes", sizeof(unsigned int));
    printf("\nSize of short int: %d bytes", sizeof(short int));
    printf("\nSize of long int: %d bytes", sizeof(long int));
    printf("\nSize of char: %d bytes", sizeof(char));
    printf("\nSize of signed char: %d bytes", sizeof(signed char));
    printf("\nSize of unsigned char: %d bytes", sizeof(unsigned char));
    printf("\nSize of float: %d bytes", sizeof(float));
    printf("\nSize of double: %d bytes", sizeof(double));
    printf("\nSize of long double: %d bytes", sizeof(long double));
    return 0;
}