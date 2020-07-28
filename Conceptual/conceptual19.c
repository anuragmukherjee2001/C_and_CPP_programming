#include<stdio.h>

int amin()
{
	int x = 3;
	float y = 3.0;
	
	if(x==y) // Implicit typecast x==y
	{
		printf("x and y are equal");
	}
	else
	{
		printf("x and y are not equal");
	}
	return 0;
}
