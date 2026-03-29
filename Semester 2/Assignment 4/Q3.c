/*WAP to find out the transpose matrix of any sparse where the triplet matrix will be inputted.
 Mayank Mohanty 25BCSG88 Section A1 11*/
#include<stdio.h>
void InputTriplet(int mat [][3])
{
	int i;
	printf("\nEnter no. of rows,columns & non-zero elements: ");
	scanf("%d%d%d",&mat[0][0],&mat[0][1],&mat[0][2]);
	for (i=1;i<=mat[0][2];i++)
	{
		printf("Enter row no.,column no. & non-zero element: ");
		scanf("%d%d%d",&mat[i][0],&mat[i][1],&mat[i][2]);
	}
}
void Display(int mat[][3])
{
	int i;
	for (i=0;i<=mat[0][2];i++)
		printf("%d %d %d\n",mat[i][0],mat[i][1],mat[i][2]);
}
void FindTranspose(int triplet[][3],int transpose[][3])
{
	int i,j,k=1;
	transpose[0][0]=triplet[0][1];
	transpose[0][1]=triplet[0][0];
	transpose[0][2]=triplet[0][2];
	for (j=0;j<triplet[0][1];j++)
	{
		for (i=1;i<=triplet[0][2];i++)
		{
			if (triplet[i][1]==j)
			{
				transpose[k][0]=triplet[i][1];
				transpose[k][1]=triplet[i][0];
				transpose[k][2]=triplet[i][2];
				k++;
			}
		}
	}
}
int main()
{
	int triplet[10][3],transpose[10][3];
	InputTriplet(triplet);
	printf("\nTriplet Matrix:\n");
	Display(triplet);
	FindTranspose(triplet,transpose);
	printf("\nTranspose Matrix:\n");
	Display(transpose);
	return 0;
}

