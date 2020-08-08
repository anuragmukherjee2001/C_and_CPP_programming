#include<stdio.h>

int main()
{
	int a = 1,n = 0;
	printf("\n enter the range: ");
	scanf("%d",&n);
	
	while(a <= n)
	{
		printf("\t %d",a);
		a++;
	}
	return 0;
}
