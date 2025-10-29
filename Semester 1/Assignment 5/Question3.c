/*Input x and compute cos(x) upto n terms.
Mayank Mohanty 25BCSG88 Section A1 Roll No.11*/
#include<stdio.h>
int main()
{
    int i,n;
    float x,sum=1,term=1;
    printf("\nEnter value of x in cos(x) in degree: ");
    scanf("%f",&x);
    x=x*3.14/180;
    printf("\nEnter no. of terms: ");
    scanf("%d",&n);
    for (i=1;i<n;i++)
    {
        term=-term*(x*x)/((2*i)*(2*i-1));
        sum+=term;
    }
    printf("\nCos(%.2f)=%.2f",x*180/3.14,sum);
    return 0;
}