#include<stdio.h>
int main()
{
	int a[20],n,i,max=0,min=0;
	
	printf("\n enter number of elements");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]>max)
		{
			max = a[i];
		}
	}
	min = max;
	for(i=0;i<n;i++)
	{
		
		if(a[i]<min)
		{
			min = a[i];
		}
	}	
	
	printf("\n the maximum number in the array is %d",max);
	printf("\n the minimum number in the array is %d",min);
	
	return 0;
	
}
