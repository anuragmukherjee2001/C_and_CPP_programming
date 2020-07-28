#include<stdio.h>

int main()
{
	int a = 5;
	int *p;
	p = &a; //& = address of operator
	
	printf("\n the value of a =%d",a);
	printf("\n the value of a using pointer operator =%d",*p); // * means value at address
	printf("\n the value of p =%d",p);
	
	return 0;	
}
