// List of prime numbers in an array

#include<stdio.h>

int main()
{
	int a[20],i,n1,j,n,f;
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
	
	printf("\n the list of prime numbers in the array is ");
	
	for(i=0;i<n;i++)
	{
		n1=a[i];
		f=0;
		for(j=2;j<n1/2;j++)
		{
			if(n%j==0)
			{
				f=1;
				break;
			}
		}
		if(f==0)
		{
			printf("%d ",n1);
		}
	}
	return 0;
}
