#include<stdio.h>

int main()
{
	int i,x,y,gcd;
	printf("\n enter two numbers");
	scanf("%d %d",&x,&y);
	for(i = 1; i <= x && i <= y; i++)
	{
		if(x%i == 0 && y %i == 0)
		{
			gcd = i;
		}
	}
	printf("\n the hcf is %d",gcd);
	return 0;
}
