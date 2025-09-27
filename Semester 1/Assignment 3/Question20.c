/*Create a menu driven program to perform arithmetic operations on two numbers based on user input.
Mayank Mohanty 25BCSG88 Section A1 Roll No.11*/
#include<stdio.h>
int main() 
{
    float r,result;
    int choice;
    printf("\nEnter radius of the circle: ");
    scanf("%f",&r);
    printf("\nEnter your choice (1-Area, 2-Circumference): ");
    scanf("%d",&choice);
    switch(choice) 
    {
        case 1:
            result=3.14*r*r;
            printf("Area of Circle= %.2f",result);
            break;
        case 2:
            result= 2*3.14*r;
            printf("\nCircumference of Circle= %.2f",result);
            break;
        default:
            printf("\nWrong entry");
    }
    return 0;
}