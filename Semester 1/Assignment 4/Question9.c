/*Print Fibonacci series upto n terms inputted by user.
Mayank Mohanty 25BCSG88 Section A1 Roll No.11*/
#include<stdio.h>
int main()
{
    int i,n,num1=0,num2=1,num3;
    printf("\nEnter no. of terms: ");
    scanf("%d",&n);
    printf("\n%d %d ",num1,num2);
    for (i=2;i<=n-1;i++)
    {
        num3=num1+num2;
        printf("%d ",num3);
        num1=num2;
        num2=num3;
    }
    return 0;
}