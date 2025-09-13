/*Enter a 3 digit number and compute its reverse.
Mayank Mohanty 25BCSG88 Section A1 Roll No.11*/
#include<stdio.h>
int main()
{
    int num,onum,rnum,o,t,h;
    printf("\nEnter a 3 digit number: ");
    scanf("%d",&num);
    onum=num;
    o=num%10;
    h=num/100;
    num/=10;
    t=num%10;
    rnum=(o*100)+(t*10)+h;
    printf("\nReverse of %d= %d",onum,rnum);
    return 0;
}