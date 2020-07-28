#include<stdio.h>

int main()
{
	int a[100],i,sum = 0,n;
	printf("\n enter the number of elements in the array");
	scanf("%d",&n);
	
	for(i = 0;i<n;i++)
	{
		printf("enter the element %d: ",i+1);
		scanf("%d",&a[i]);
	}
	printf("the array is:\n");
	for(i = 0;i<n;i++)
	{
		printf("%d ",a[i]);
		
	}
	printf("\nthe array after reverse is\n");
	for(i=n-1;i>=0;i--)
	{
		printf("%d ",a[i]);
	}
	
	return 0;
}
