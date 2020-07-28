#include<stdio.h>

struct student{
	char name[20];
	int roll;
};
int main()
{
	struct student s1 ={"sbr",10},*s2=&s1;
	printf("%s %d\n",s1.name,s1.roll);
	printf("%s %d\n",(*s2).name,(*s2).roll);
	printf("%s %d\n",s2->name,s2->roll);
	
	printf("%u %u %u\n",s1.name,&s1.roll,&s1);
	printf("%u %u\n",s2,&s2);
	
	return 0;
}
