#include<stdio.h>

int main()
{
	int a,b;
	int *p1,*p2;
	
	p1=&a;
	p2=&b;
	
	printf("\n enter the values of a and b");
	scanf("%d%d",&a,&b);
	
	*p1=*p1+*p2;
	*p2=*p1-*p2;
	*p1=*p1-*p2;
	
	printf("\n after swaping...");
	printf("\n the values of a and b are %d %d ",a,b);
	
	return 0;
}
