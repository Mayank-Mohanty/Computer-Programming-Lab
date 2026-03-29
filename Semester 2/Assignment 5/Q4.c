/*WAP to check the validity of an expression containing nested parenthesis using a stack.
 Mayank Mohanty 25BCSG88 Section A1 11*/
#include<stdio.h>
#include<string.h>
#define MAXSTK 20
int TOP=-1;
char STACK[MAXSTK];
void PUSH(char );
char POP();
int main()
{
	char exp[MAXSTK],ch;
	int i,valid=1;
	printf("\nEnter expression with nested parenthesis: ");
	scanf(" %[^\n]",exp);
	for (i=0;i<strlen(exp);i++)
	{
		if (exp[i]=='(' || exp[i]=='[' || exp[i]=='{')
			PUSH(exp[i]);
		if (exp[i]==')' || exp[i]==']' || exp[i]=='}')
		{
			if (TOP==-1)
				valid=0;
			else
			{
				ch=POP();
				if ((exp[i]==')' && (ch=='[' || ch=='{')) || (exp[i]==']' && (ch=='(' || ch=='{')) || (exp[i]=='}' && (ch=='[' || ch=='(')))
					valid=0;
			}
		}
	}
	if (TOP!=-1)
		valid=0;
	if (valid==1)
		printf("\nExpression is valid\n");
	else
		printf("\nExpression is invalid\n");
	return 0;
}
void PUSH(char item)
{
	if (TOP==MAXSTK-1)
		printf("\nStack Overflow");
	else
	{
		TOP++;
		STACK[TOP]=item;
	}
}
char POP()
{
	char item;
	if (TOP==-1)
		printf("\nStack Underflow");
	else
	{
		item=STACK[TOP];
		TOP--;
		return item;
	}
}
