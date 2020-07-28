#include<stdio.h>
int main()
{
	int i, j, k,n;
	printf("\n enter the limit");
	scanf("%d",&n);
	for(i = 1; i <= n; i++)
	{
		for(j = 1; j < n*2; j++)
		{
			if(j <= i || j >= n*2-i)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
}
