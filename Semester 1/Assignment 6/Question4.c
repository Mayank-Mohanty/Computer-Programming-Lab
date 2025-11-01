/*Read n numbers integer arrray and calculate sum of all even numbers and sum of all odd numbers and display the larger sum.
Mayank Mohanty 25BCSG88 Section A1 Roll No.11*/
#include <stdio.h>
int main()
{
    int n,i,esum=0,osum=0;
    printf("\nEnter the number of elements: ");
    scanf("%d",&n);
    int a[n];
    printf("\nEnter array elements: ");
    for (i=0;i<n;i++) 
        scanf("%d",&a[i]);
    for (i=0;i<n;i++)
    {
        if (a[i]%2==0)
            esum+=a[i];
        else
            osum+=a[i];
    }
    if (esum>osum)
        printf("\nLarger sum is: Even sum=%d",esum);
    else if (osum>esum)
        printf("\nLarger sum is: Odd sum=%d",osum);
    else
        printf("\nBoth sums are equal: Even sum=Odd sum=%d",esum);
    return 0;
}