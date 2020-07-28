#include<stdio.h>

#define SQ(x) x+x*x

int main()
{
	int a;
	a = SQ(4)+SQ(5);
	printf("%d",a);
	return 0;
}
