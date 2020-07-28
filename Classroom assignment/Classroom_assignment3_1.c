#include<stdio.h>
#include<stdlib.h>

int main()
{
	int *p,n,i,sum=0;
	printf("\n enter size of the array ");
	scanf("%d",&n);
	p=(int*)malloc(n*sizeof(int)); // dynamic memory allocation
	printf("\n Enter elements of the array ");
	for(i=0;i<n;i++)
	{
		scanf("%d",p+i);
	}
	for(i=0;i<n;i++)
	{
		sum=sum+*(p+i);
	}
	printf("\n sum = %d",sum);
	free(p);
	return 0;
}

