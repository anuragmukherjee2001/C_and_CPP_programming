#include<stdio.h>

#define SQR(x) x*x
#define CUBE(x) SQR(x)*x

int main()
{
	int a = 5,b;
	b = CUBE(a);
	printf("%d",b);
	return 0;	
}
