#include<stdio.h>

void main()
{
	int i = 0;
	for(foo(); i ==1; i=2)
	printf("\n in for loop");
	printf("\n after for loop");
	
}

int foo()
{
	return 1;
}
