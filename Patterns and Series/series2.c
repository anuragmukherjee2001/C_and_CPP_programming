#include<stdio.h>
int main()
{
	int i,n;
	printf("\n enter the range");
	scanf("%d",&n);
	float sum = 1,j;
	for(i=1;i<n;i++)
	{
		j = i*2;
		sum = sum+1/j;
		
	}
	printf("%f",sum);
	return 0;
}
