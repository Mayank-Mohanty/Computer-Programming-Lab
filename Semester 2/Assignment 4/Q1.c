/*WAP to find out triplet matrix.
 Mayank Mohanty 25BCSG88 Section A1 11*/
#include<stdio.h>
void InputSparse(int s[10][10],int r,int c)
{
	int i,j;
	for (i=0;i<r;i++)
	{
		for (j=0;j<c;j++)
			scanf("%d",&s[i][j]);
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
void FindTriplet(int s[10][10],int r,int c,int t[10][3])
{
	int i,j,trow=1,nz=0;
	for (i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(s[i][j]!=0)
			{
				t[trow][0]=i;
				t[trow][1]=j;
				t[trow][2]=s[i][j];
				nz++;
				trow++;
			}
		}
	}
	t[0][0]=r;
	t[0][1]=c;
	t[0][2]=nz;
}
void DisplayTriplet(int t[10][3])
{
	int i;
	for (i=0;i<=t[0][2];i++)
		printf("%d %d %d\n",t[i][0],t[i][1],t[i][2]);
}
int main()
{
	int s[10][10],t[10][3],r,c,i,j;
	printf("\nEnter no. of rows and columns of sparse matrix: ");
	scanf("%d%d",&r,&c);
	printf("\nEnter sparse matrix:\n");
	InputSparse(s,r,c);
	printf("\nSparce matrix:\n");
	DisplaySparse(s,r,c);
	FindTriplet(s,r,c,t);
	printf("\nTriplet matrix:\n");
	DisplayTriplet(t);
	return 0;
}
