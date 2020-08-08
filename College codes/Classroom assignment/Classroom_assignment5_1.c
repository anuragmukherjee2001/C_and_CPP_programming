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
	struct student s;
	printf("\n enter the name of the student ");
	fgets(s.name,30,stdin);
	printf("\n enter the roll of the student ");
	scanf("%d",&s.roll);
	printf("\n enter the department of the student ");
	scanf("%s",&s.department);
	printf("\n enter the section of the student ");
	scanf("%d",&s.section);
	printf("\n enter the total marks of the student ");
	scanf("%d",&s.total_marks);
	system("cls");
	printf("\n The student details are...");
	printf("\n Roll number = %d ",s.roll);
	printf("\n Nmae = %s ",s.name);
	printf("\n Department = %s",s.department);
	printf("\n Section = %d",s.section);
	printf("\n total marks = %d ",s.total_marks);
	return 0;
	
}
