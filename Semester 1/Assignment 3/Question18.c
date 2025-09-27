/*Read an integer and display respective colour, 1 red, 2 green, 3 blue, 4 black, any other input is invalid.
Mayank Mohanty 25BCSG88 Section A1 Roll No.11*/
#include<stdio.h>
int main() 
{
    int choice;
    printf("\nEnter a number (1-4): ");
    scanf("%d",&choice);
    switch (choice)
    {
        case 1:
            printf("\nColour: Red");
            break;
        case 2:
            printf("\nColour: Green");
            break;
        case 3:
            printf("\nColour: Blue");
            break;
        case 4:
            printf("\nColour: Black");
            break;
        default:
            printf("\nInvalid input");
    }
    return 0;
}