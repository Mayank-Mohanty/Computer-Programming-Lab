/*WAP to find out the original sparse matrix from its triplet representation.
 Mayank Mohanty 25BCSG88 Section A1 11*/
#include<stdio.h>
void InputTriplet(int mat[][3])
{
	int i;
	printf("\nEnter no. of rows,columns & non-zero elements: ");
	scanf("%d%d%d",&mat[0][0],&mat[0][1],&mat[0][2]);
	for (i=1;i<=mat[0][2];i++)
	{
		printf("Enter row no.,col no. & non-zero element: ");
		scanf("%d%d%d",&mat[i][0],&mat[i][1],&mat[i][2]);
	}
}
void DisplayTriplet(int mat[][3])
{
	int i;
	for (i=0;i<=mat[0][2];i++)
		printf("%d %d %d\n",mat[i][0],mat[i][1],mat[i][2]);
}
void FindSparse(int t[10][3],int s[10][10])
{
	int i,j,r,c;
	r=t[0][0];
	c=t[0][1];
	for(i=0;i<r;i++)
	{
		for (j=0;j<c;j++)
			s[i][j]=0;
	}
	for (i=1;i<=t[0][2];i++)
	{
		s[t[i][0]][t[i][1]]=t[i][2];
	}
}
void DisplaySparse(int s[10][10],int r,int c)
{
	int i,j;
	for (i=0;i<r;i++)
	{
		for (j=0;j<c;j++)
			printf("%d ",s[i][j]);
		printf("\n");
	}
}
int main()
{
	int s[10][10],t[10][3],r,c;
	printf("\nEnter triplet matrix:\n");
	InputTriplet(t);
	r=t[0][0];
	c=t[0][1];
	printf("\nTriplet matrix:\n");
	DisplayTriplet(t);
	FindSparse(t,s);
	printf("\nSparse matrix:\n");
	DisplaySparse(s,r,c);
	return 0;
}

