/*Input three numbers and display the largest one.
Mayank Mohanty 25BCSG88 Section A1 Roll No.11*/
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("\nEnter three numbers: ");
    scanf("%d%d%d",&a,&b,&c);
    if (a>b && a>c)
        printf("\n%d is largest",a);
    else if (b>c)
        printf("\n%d is largest",b);
    else
        printf("\n%d is largest",c);
    return 0;
}