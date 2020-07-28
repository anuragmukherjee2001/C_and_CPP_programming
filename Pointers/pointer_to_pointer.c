//pointers to pointers

#include<stdio.h>

int main()
{
	int a=5,*p,**pp;
	
	p=&a;
	pp=&p;
	
	printf("\n the value of a is %d ",a);
	printf("\n the value of p is %d ",*p);
	printf("\n the value of pp is %d ",**pp);
	
	return 0;
}
