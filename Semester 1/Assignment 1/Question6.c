/*Initialise total seconds and convert it to hours, minutes and seconds.
Mayank Mohanty 25BCSG88 Section A1 Roll No.11*/
#include<stdio.h>
int main()
{
    int seconds=5000,hr,min,sec;
    hr=seconds/3600;
    min=(seconds%3600)/60;
    sec=seconds%60;
    printf("\nTotal seconds=%d",seconds);
    printf("\nHours=%d Minutes=%d Seconds=%d",hr,min,sec);
    return 0;
}