#include<stdio.h>

#define SQ(x) x*x+x

int main()
{
	int a = 10,b;
	b = SQ(a+3);
	printf("%d",b);
	return 0;
}
