/*WAP to convert an infix expression to postfix expression.
 Mayank Mohanty 25BCSG88 Section D1 18*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define MAXSTK 20
char STACK[MAXSTK], TOP = -1;
void PUSH(char);
char POP();
int Precedence(char);
int main()
{
    char Q[MAXSTK], P[MAXSTK], item;
    int i;
    PUSH('(');
    printf("\nEnter infix expression: ");
    scanf(" %[^\n]", Q);
    strcat(Q, ")");
    P[0] = '\0';
    for (i = 0; i < strlen(Q); i++)
    {
        if (isalnum(Q[i]))
            strncat(P, &Q[i], 1);
        else if (Q[i] == '(')
            PUSH(Q[i]);
        else if (Q[i] == ')')
        {
            while (STACK[TOP] != '(')
                strncat(P, &STACK[TOP], 1), POP();

            POP();
        }
        else
        {
            if (Q[i] != ' ')
            {
                while (Precedence(STACK[TOP]) >= Precedence(Q[i]))
                    strncat(P, &STACK[TOP], 1), POP();

                PUSH(Q[i]);
            }
        }
    }
    printf("\nPostfix expression: %s", P);
    return 0;
}
void PUSH(char item)
{
    if (TOP == MAXSTK - 1)
        printf("\nStack Overflow");
    else
    {
        TOP++;
        STACK[TOP] = item;
    }
}
char POP()
{
    char item;
    if (TOP == -1)
    {
        printf("\nStack Underflow");
        return '\0';
    }
    else
    {
        item = STACK[TOP];
        TOP--;
        return item;
    }
}
int Precedence(char ch)
{
    if (ch == '^')
        return 3;
    else if (ch == '*' || ch == '/')
        return 2;
    else if (ch == '+' || ch == '-')
        return 1;
    else
        return 0;
}