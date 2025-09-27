/*Calculate parking charge, enter type of vehicle and charge for heavy vehicle is Rs.20/hour for first 5 hours and beyond 5 hours Rs.40/hour,charge for light vehicle is Rs.10/hour for first 3 hours and beyond 3 hours Rs.30/hour.
Mayank Mohanty 25BCSG88 Section A1 Roll No.11*/
#include<stdio.h>
int main() 
{
    char type;
    float hours,charge;
    printf("\nEnter vehicle type (H-Heavy,L-Light): ");
    scanf("%c",&type);
    printf("\nEnter number of hours parked: ");
    scanf("%f",&hours);
    if (type=='H') 
    {
        if (hours<=5)
            charge=hours*20;
        else
            charge =(5*20)+((hours-5)*40);
    }
    else if (type=='L') 
    {
        if (hours<=3)
            charge=hours*10;
        else
            charge=(3*10)+((hours-3)*30);
    }
    else
        printf("\nInvalid vehicle type entered");
    printf("\nTotal Parking Charge= Rs.%.2f", charge);
    return 0;
}