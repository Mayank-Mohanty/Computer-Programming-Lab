/*Input a number and check whether prime or composite.
Mayank Mohanty 25BCSG88 Section A1 Roll No.11*/
#include<stdio.h>
#include<math.h>
int main()
{
    int i,n,flag=0;
    printf("\nEnter number: ");
    scanf("%d",&n);
    for (i=2;i<=sqrt(n);i++)
    {
        if (n%i==0)
        {
            flag=1;
            break;
        }
    }
    if (flag==0)
        printf("\n%d is a prime number",n);
    else
        printf("\n%d is a composite number",n);
    return 0;
}