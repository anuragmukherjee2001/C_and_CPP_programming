#include<stdio.h>

int main()
{
	int a[50],i,p=0,n,v=0,z=0;
	printf("\n enter the number of elements in the array");
	scanf("%d",&n);
	
	for(i = 0;i<n;i++)
	{
		printf("\n enter the elemenet %d: ",i);
		scanf("%d",&a[i]);
		if(a[i]>0)
		p++;
		else if(a[i]==0)
		z++;
		else
		v++;
	}
	printf("\n teh array is");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n the +ve element in the array is: %d",p);
	printf("\n the -ve element in the array is: %d",v);
	printf("\n the zero element in the array is: %d",z);
	return 0;
}
