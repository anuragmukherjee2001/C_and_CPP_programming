#include<stdio.h>
#include<stdlib.h>

struct student
{
	int roll;
	char name[30];
	char department[30];
	int section;
	int total_marks;	
};

int main(void)
{
	struct student s[100];
	int n,i;
	
	printf("\n enter the number of students you want to enter the details ");
	scanf("%d",&n);
	for(i = 0;i<n;i++)
	{
		printf("\n enter the details of student %d ",i+1);
		printf("\n enter the name of the student ");
		scanf("%s",&s[i].name);
		printf("\n enter the roll of the student ");
		scanf("%d",&s[i].roll);
		printf("\n enter the department of the student ");
		scanf("%s",&s[i].department);
		printf("\n enter the section of the student ");
		scanf("%d",&s[i].section);
		printf("\n enter the total marks of the student ");
		scanf("%d",&s[i].total_marks);
		system("cls");
	}
	
	printf("\n the details of student whose marks is greater than 85...");
	
	for(i=0;i<n;i++)
	{
		if(s[i].total_marks>85)
		{
			printf("\n The student %d details are...",i+1);
			printf("\n Roll number = %d ",s[i].roll);
			printf("\n Nmae = %s ",s[i].name);
			printf("\n Department = %s",s[i].department);
			printf("\n Section = %d",s[i].section);
			printf("\n total marks = %d ",s[i].total_marks);
			system("pause");
			getchar();
			system("cls");
		}
	}
	return 0;
}
