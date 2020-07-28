// printing array using pointer

#include<stdio.h>

int main()
{
	int a[10],i,*p,n;
	
	printf("\n enter the size of the array");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	p=&a[0];
	
	for(i=0;i<n;i++)
	{
		printf("%d ",*p);
		p++;
	}
	return 0;
}
