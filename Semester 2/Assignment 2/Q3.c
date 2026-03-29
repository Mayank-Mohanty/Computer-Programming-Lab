/*WAP to define a structure DISTANCE having members as kms and meters. Define a function ADDDISTANCE() which will recieve two structure variables as its arguments and will return a structure, its will add two distance values.
 Mayank Mohanty 25BCSG88 Section A1 11*/
#include<stdio.h>
struct DISTANCE{
	int kms;
	int meters;
};
struct DISTANCE ADDDISTANCE (struct DISTANCE d1,struct DISTANCE d2){
	struct DISTANCE d3;
	d3.kms=d1.kms+d2.kms;
	d3.meters=d1.meters+d2.meters;
	if (d3.meters>=1000)
	{
		d3.kms+=d3.meters/1000;
		d3.meters=d3.meters%1000;
	}
	return d3;
}
int main()
{
	struct DISTANCE d1,d2,d3;
	printf("\nEnter 1st distance kms and meters: ");
	scanf("%d%d",&d1.kms,&d1.meters);
	printf("\nEnter 2nd distance kms and meters: ");
        scanf("%d%d",&d2.kms,&d2.meters);
	d3=ADDDISTANCE(d1,d2);
	printf("\nResultant: %d kms and %d meters",d3.kms,d3.meters);
	printf("\n");
	return 0;
}

