// Sum of elements of an array using pointers

#include<stdio.h>

int main()
{
	int a[10],*p,i,s=0,n;
	
	printf("\n enter the number of elements of the array");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	p=&a[0];
	
	for(i=0;i<n;i++)
	{
		s=s+(*p);
		p++;
	}
	printf("\n the sum is %d ",s);
	return 0;
}
