// Different types of pointers

#include<stdio.h>
int main()
{
	int a, *p;
	float b,*q;
	char c,*r;
	
	p=&a;
	q=&b;
	r=&c;
	
	printf("\n enter an integer");
	scanf("%d",&a);
	printf("\n enter an float");
	scanf("%f",&b);
	printf("\n enter a character");
	scanf("%c",&c);
	
	printf("\n %d %f %c",*p,*q,*r);
	
	return 0;
}
