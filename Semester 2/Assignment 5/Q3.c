/*WAP to evaluate postfix expression using stack.
 Mayank Mohanty 25BCSG88 Section A1 11*/
#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define MAXSTK 20
int STACK[MAXSTK],TOP=-1;
void PUSH(int );
char POP();
void OP(char );
int main()
{
	char exp[MAXSTK];
	int i,item;
	printf("\nEnter postfix expression: ");
	scanf(" %[^\n]",exp);
	for (i=0;i<strlen(exp);i++)
	{
		if (isdigit(exp[i]))
		{
			item=(exp[i]-'0');
			PUSH(item);
		}
		else
		{
			if (exp[i]!=' ')
				OP(exp[i]);
		}
	}
	printf("\nResult = %d\n",STACK[TOP]);
}
void PUSH(int item)
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
void OP(char ch)
{
	int A,B,res;
	if (ch!='+' && ch!='-' && ch!='*' && ch!='/' && ch!='^')
		return;
	A=POP();
	B=POP();
	switch (ch)
	{
		case '+': res=B+A;
			  PUSH(res);
			  break;
		case '-': res=B-A;
			  PUSH(res);
			  break;
		case '*': res=B*A;
			  PUSH(res);
			  break;
		case '/': res=B/A;
			  PUSH(res);
			  break;
		case '^': res=B^A;
			  PUSH(res);
			  break;
	}
}

