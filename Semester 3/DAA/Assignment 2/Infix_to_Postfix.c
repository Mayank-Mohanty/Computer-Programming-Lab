/*WAP to convert an infix expression to postfix expression.
 Mayank Mohanty 25BCSG88 Section D1 18*/
#include <stdio.h>
#define N 50
char S[N];
int T=-1;
void push(char ele)
{
    if (T==N-1)
        return;
    S[++T]=ele;
}
char pop()
{
    if (T==-1)
        return '\0';
    return S[T--];
}
int precedence(char c)
{
    if (c == '+' || c == '-')
        return 1;
    if (c == '*' || c == '/' || c == '%')
        return 2;
    if (c == '^')
        return 3;
    return 0;
}
int is_operator(char c)
{
    return (c == '+' || c == '-' || c == '*' || c == '/' || c == '%' || c == '^');
}
void infix_to_postfix(char infix[],char postfix[])
{
    int i=0,j=0;
    char ch;
    for (i=0;infix[i]!='\0';i++)
    {
        ch=infix[i];
        if (ch=='(')
            push(ch);
        else if (ch==')')
        {
            while (T!=-1 && S[T]!='(')
                postfix[j++]=pop();
            pop();
        }
        else if (is_operator(ch))
        {
            while (T!=-1 && precedence(S[T]) >= precedence(ch))
                postfix[j++]=pop();
            push(ch);
        }
        else
            postfix[j++]=ch;
    }
    while (T!=-1)
        postfix[j++]=pop();
    postfix[j]='\0';
}
int main()
{
    char infix[N],postfix[N];
    printf("Enter the infix expression: ");
    scanf("%[^\n]",infix);
    infix_to_postfix(infix,postfix);
    printf("\nPostfix Expression: %s\n",postfix);
    return 0;
}
