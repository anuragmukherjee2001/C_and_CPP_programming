#include<stdio.h>

void main()
{
	int a=b=c=10;	// Compile time error(Wrong statement)
	
	a=b=c=50;
	
	printf("\n %d %d %d",a,b,c);
}
