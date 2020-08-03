#include<stdio.h>
int main()
{
	int a = 4,b = 3, c = 2, d = 1, e = 5;
	a++;
	--b;
	c = a++ + c*d;
	d++;
	e = c;
	printf("%d %d %d %d %d",a,b,c,d,e);
	return 0;
}
