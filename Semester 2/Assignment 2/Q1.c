/*WAP to define structure POINT having elements Xco,Yco and enter two points and find the distance between them.
 Mayank Mohanty 25BCSG88 Section A1 11*/
#include<stdio.h>
#include<math.h>
struct POINT{
	float Xco;
	float Yco;
};
int main()
{
	struct POINT p1,p2;
	float dist;
	printf("\nEnter x and y co-ordinate of 1st point: ");
	scanf("%f%f",&p1.Xco,&p1.Yco);
	printf("\nEnter x and y co-ordinate of 2nd point: ");
        scanf("%f%f",&p2.Xco,&p2.Yco);
	dist=sqrt(pow(p2.Xco-p1.Xco,2)+pow(p2.Yco-p1.Yco,2));
	printf("\nDistance between points = %.2f",dist);
	printf("\n");
	return 0;
}

