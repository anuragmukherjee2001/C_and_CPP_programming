#include<stdio.h>

int main()
{
	int a[20],i,n1,n2,n;
	printf("\n enter number of elements");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("the array is ");
	
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	
	printf("\n enter the number you want to replace");
	scanf("%d",&n1);
	
	printf("\n enter the number which you want to place ");
	scanf("%d",&n2);
	
	for(i=0;i<n;i++)
	{
		if(a[i]==n1)
		{
			a[i] = n2;
		}
	}
	
	printf("\n updated array");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}
