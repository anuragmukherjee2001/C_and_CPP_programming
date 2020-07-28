//Print sum of first and last element,second and second last element and so on...

#include<stdio.h>


	int main()
{
	int a[20],i,j,n;
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
	
	for(i=0,j=n-1;i<=j;i++,j--)
	{
		printf("\n %d ",a[i]+a[j]);
	}
	
	return 0;
}
