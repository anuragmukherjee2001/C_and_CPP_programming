#include<stdio.h>

int main()
{
	int i = 5;
//	int l=0;
	
	
	int var = sizeof(i++);
	printf("%d %d",i,var);
	
//	printf("%d",sizeof(l));
	
	return 0;
}
