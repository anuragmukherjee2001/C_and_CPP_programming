#include<stdio.h>

int main()
{
	int a[30],b[30],i,n;
	
	printf("\n enter the number of elements in the array");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("\n Enter the element %d: ",i+1);
		scanf("%d",&a[i]);
	}
	printf("\n enter the second array");
	for(i=0;i<n;i++)
	{
		printf("\n Enter the element %d: ",i+1);
		scanf("%d",&b[i]);
	}
	
	printf("\n the first array is ");
	
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n the second array is ");
	
	for(i=0;i<n;i++)
	{
		printf("%d ",b[i]);
	}
	
	for(i=0;i<n;i++)
	{
		a[i]=a[i]+b[i];
		b[i]=a[i]-b[i];
		a[i]=a[i]-b[i];
	}
	
	printf("\n after swaping...\n\n\n");
	printf("\n the first array is ");
	
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n the second array is ");
	
	for(i=0;i<n;i++)
	{
		printf("%d ",b[i]);
	}
	
	return 0;
}
