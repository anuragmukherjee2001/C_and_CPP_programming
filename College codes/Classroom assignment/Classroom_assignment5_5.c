#include<stdio.h>

struct student{
	int roll;
	char name[30];
	char section;
	float tot_marks;
}s;

union students{
	int roll;
	char name[30];
	char section;
	float tot_marks;
}u;

int main()
{
	printf("The size of structure is %d bytes",sizeof(s));
	printf("\n The size of structure is %d bytes",sizeof(u));
	return 0;
}
