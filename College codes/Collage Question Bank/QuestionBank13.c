#include<stdio.h>

void main()
{
	static int a = 5;
	a = a + 3;
	printf("%d",a);
}
