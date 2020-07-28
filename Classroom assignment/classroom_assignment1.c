#include<stdio.h>

int fact(int n)
{
	int i,f = 1;
	for(i=1;i<=n;i++)
	{
	 f=f*i;
	}
	
	return f;
//	printf("%d",f);	
}

int ncr(int x,int r)
{
	int c;
	c = fact(x)/(fact(r)*fact(x-r));
	printf("%d",c);
}

int main()
{
	int d,n,r,z;
	printf("\n enter a number to find its factorial");
	scanf("%d",&z);
	
	printf("%d",fact(z));
	printf("\n enter n and r");
	scanf("%d %d",&n,&r);
	ncr(n,r);
//	fact(n);
//	d=ncr(n,r);
//	printf("\n %d",d);
	return 0;
}

