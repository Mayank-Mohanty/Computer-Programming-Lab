/*WAP to define a structure STUDENT having members name,roll_no,branch,CGPA. Enter details of 5 students and display the details of the student with highest CGPA.
 Mayank Mohanty 25BCSG88 Section A1 11*/
#include<stdio.h>
struct STUDENT{
	char name[20];
	int roll_no;
	char branch[10];
	float CGPA;
};
int main()
{
	struct STUDENT s[5];
	int i,max_index=0;
	for (i=0;i<5;i++)
	{
		printf("\nEnter details of Student %d",i+1);
		printf("\nEnter name: ");
		scanf(" %[^\n]",s[i].name);
		printf("Enter roll no.: ");
		scanf("%d",&s[i].roll_no);
		printf("Enter branch: ");
		scanf(" %[^\n]",s[i].branch);
		printf("Enter CGPA: ");
		scanf("%f",&s[i].CGPA);
	}
	for (i=0;i<5;i++)
	{
		if(s[i].CGPA>s[max_index].CGPA)
			max_index=i;
	}
	printf("\nDetails of Student with highest CGPA: ");
	printf("\nName = %s",s[max_index].name);
	printf("\nRoll No. = %d",s[max_index].roll_no);
	printf("\nBranch = %s",s[max_index].branch);
	printf("\nCGPA = %.2f",s[max_index].CGPA);
	printf("\n");
	return 0;
}

