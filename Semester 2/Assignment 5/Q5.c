/*WAP to check an inputted string is palindrome or not using stack.
 Mayank Mohanty 25BCSG88 Section A1 11*/
#include<stdio.h>
#include<string.h>
#define MAXSTK 20
char STACK[MAXSTK];
int TOP=-1;
void PUSH(char );
char POP();
int main()
{
	int i;
	char str[20],rev[20];
	printf("\nEnter string: ");
	scanf(" %[^\n]",str);
	for (i=0;str[i]!='\0';i++)
		PUSH(str[i]);
	for(i=0;i<strlen(str)/2;i++)
	{
		if (str[i]!=POP())
		{
			printf("\nString is not a palindrome\n");
			break;
		}
	}
	if (i==strlen(str)/2)
		printf("\nString is a palindrome\n");
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

