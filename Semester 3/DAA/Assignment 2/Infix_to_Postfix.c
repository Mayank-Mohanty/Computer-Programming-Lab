/*WAP to convert an infix expression to postfix expression.
 Mayank Mohanty 25BCSG88 Section D1 18*/
#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define MAXSTK 20
char STACK[MAXSTK],TOP=-1;
void PUSH(char );
char POP();
int Precedence(char );
int main()
{
	char Q[MAXSTK],P[MAXSTK],item;
	int i,pre;
	PUSH('(');
	strncat(Q,")",1);
	printf("\nEnter infix expression: ");
	scanf(" %[^\n]",Q);
	for (i=0;i<strlen(Q);i++)
	{
		if (isalnum(Q[i]))
			strncat(P,Q[i],1);
		else if (Q[i]=="(")
			PUSH(Q[i]);
		else if (Q[i]==")")
		{
			while (STACK[TOP]!="(")
				strncat(P,POP(),1);
			POP();
		}
		else
		{
			if (Q[i]!=' ')
			{
				while (Precedence(STACK[TOP]>=Precedence(Q[i]))
					strncat(P,POP(),1);
				PUSH(Q[i]);
			}
		}

	}
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
int Precedence(char ch)
{
	if (ch=="^")
		return 3;
	else if (ch=="*" || ch=="/")
		return 2;
	else if (ch=="+" || ch=="-")
		return 1;
}

