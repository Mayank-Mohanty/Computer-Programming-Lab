/*WAP to reverse an inputted string using stack.
 Mayank Mohanty 25BCSG88 Section A1 11*/
#include<stdio.h>
#define MAXSTK 20
char STACK[MAXSTK];
int TOP=-1;
void PUSH(char );
char POP();
int main()
{
	int i,choice=1;
	char str[20],rev[20];
	printf("\nEnter string: ");
	scanf(" %[^\n]",str);
	for (i=0;str[i]!='\0';i++)
		PUSH(str[i]);
	for (i=0;TOP!=-1;i++)
		rev[i]=POP();
	rev[i]='\0';
	printf("\nReversed String: %s\n",rev);
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

