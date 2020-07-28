// factorial using pointer

#include<stdio.h>

int main()
{
	int n,*p1,*p2,f=1,i;
	printf("\n enter the number");
	scanf("%d",&n);
	
	p1=&f;
	p2=&n;
	
	for(i=1;i<=*p2;i++)
	{
		*p1=(*p1)*i;
	}
	printf("\n the factorial is %d ",f);
	
	return 0;
}
