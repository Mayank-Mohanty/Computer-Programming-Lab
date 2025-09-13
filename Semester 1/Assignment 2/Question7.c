/*Calculate distance between two points (x1,y1) and (x2,y2).
Mayank Mohanty 25BCSG88 Section A1 Roll No.11*/
#include<stdio.h>
#include<math.h>
int main()
{
    float x1,y1,x2,y2,dis;
    printf("\nEnter (x1,y1): ");
    scanf("%f%f",&x1,&y1);
    printf("\nEnter (x2,y2): ");
    scanf("%f%f",&x2,&y2);
    dis=sqrt(pow(x2-x1,2)+pow(y2-y1,2));
    printf("\nDistance between (%f,%f) and (%f,%f)=%f",x1,y1,x2,y2,dis);
    return 0;
}