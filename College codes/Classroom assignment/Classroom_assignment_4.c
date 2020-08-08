#include<stdio.h>

int strong(int z)
{
	int i,r,fact=1,s,n1;
	
	n1 = z;
	
	while(z>0)
	{
		r=z%10;
		fact = 1;
		for(i=1;i<=r;i++)
		{
			
			fact=fact*i;
			
		}
		s=s+fact;
		z=z/10;
	}
	if(s==n1)
	{
		printf("\n strong");
	}
	else
	printf("\n not strong");
return 0;	
}

int main()
{
	int num;
	printf("\n enter the number ");
	scanf("%d",&num);
	strong(num);
//	a=n;
//	if(strong(a)==n)
//	printf("%d is strong",n);
//	else
//	printf("%d is not strong",n);
	return 0;
}
