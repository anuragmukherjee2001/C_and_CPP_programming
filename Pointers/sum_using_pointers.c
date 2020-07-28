#include<stdio.h>

void main()
{
	int a,b,c;
	int *p1,*p2,*p3;
	printf("\n enter two numbwrs");
	scanf("%d %d",&a, &b);
	p1=&a;
	p2=&b;
	p3=&c;
	*p3 = (*p1)+(*p2);
//	printf("\n sum =%d",*p3);
	printf("\n sum =%d",c);
	
//	return 0;
}
