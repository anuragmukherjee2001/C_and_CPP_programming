#include<stdio.h>

int main()
{
	int a[100],i,n,f=0,e;
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
	printf("\n enter the element you want to search");
	scanf("%d",&e);
	for(i=0;i<n;i++)
	{
		if(a[i]==e)
		{
			f=1;
			break;
		}
	}
	if(f==1)
	printf("\n number found");
	else
	printf("\n the number is not found");
	return 0;
}
