/*Create a menu driven program to perform arithmetic operations on two numbers based on user input.
Mayank Mohanty 25BCSG88 Section A1 Roll No.11*/
#include<stdio.h>
int main() 
{
    int num1,num2;
    char op;
    printf("\nEnter two numbers: ");
    scanf("%d%d",&num1,&num2);
    printf("Enter operator (+, -, *, /, %%): ");
    scanf(" %c",&op);
    switch (op) 
    {
        case '+':
            printf("\nResult: %d+%d=%d",num1,num2,num1+num2);
            break;
        case '-':
            printf("\nResult: %d-%d=%d",num1,num2,num1-num2);
            break;
        case '*':
            printf("\nResult: %d*%d=%d",num1,num2,num1*num2);
            break;
        case '/':
            if (num2!=0)
                printf("\nResult: %d/%d=%.2f",num1,num2,(float)num1/num2);
            else
                printf("\nError: Division by zero not allowed");
            break;
        case '%':
            if (num2!=0)
                printf("\nResult: %d %% %d=%d",num1,num2,num1%num2);
            else
                printf("\nError: Modulus by zero not allowed");
            break;
        default:
            printf("\nError");
    }
    return 0;
}