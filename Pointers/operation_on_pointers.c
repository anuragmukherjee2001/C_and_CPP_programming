#include<stdio.h>

int main()
{
	int a=5,b=0;
	int *p;
	p = &a;
	
	b = a+ *p;
	
	printf("\n the value of b is %d ",b);
	printf("\n the value of p is %d ",*p);
	*p = *p +a;
	printf("\n the value of p is %d ",*p);
	return 0;
}
