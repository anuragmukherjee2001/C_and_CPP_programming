#include<stdio.h>

int main()
{
	int a = 8,b = 10;
	a = a++ + --b;
	printf("%d %d",a,b);
	return 0;
}
