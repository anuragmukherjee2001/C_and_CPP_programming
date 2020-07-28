#include<stdio.h>

int main()
{
	int a[100],i,n,sumeve=0,sumodd=0;
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
	for(i=0;i<n;i++)
	{
		if(a[i]%2==0)
		{
			sumeve = sumeve+a[i];
		}
		else
		{
			sumodd = sumodd+a[i];
		}
	}
	printf("\n the sum of even indexes is: %d",sumeve);
	printf("\n the sum of odd indexes is: %d",sumodd);
	return 0;
}
