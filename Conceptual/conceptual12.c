#include<stdio.h>

a = 3;

void main()
{
	m(a);	
}

void n(int x)
{
	x = x*a;
	printf("%d",x);
}

void m(int y)
{
	int a;
	a = 1;
	a = y - a;
	n(a);
	printf("%d",a);
}
