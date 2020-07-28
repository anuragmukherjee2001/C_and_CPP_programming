#include<stdio.h>
int main()
{
	int a = 0, b = 1,i,c,n;
	printf("\n enter the limit");
	scanf("%d",&n);
	printf("\n%d\t %d",a,b);
	for(i = 1; i <= n; i++)
	{
		c = a + b;
		printf("%d\t",c);
		a = b;
		b = c;
	}
	return 0;
	
}
