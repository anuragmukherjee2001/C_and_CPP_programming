#include<stdio.h>

int main()
{
	int a[100],i,n,c=0,d=0;
	
	printf("\n enter the number of elements");
	scanf("%d",&n);
	
	for(i = 0;i<n;i++)
	{
		printf("enter the element %d: ",i+1);
		scanf("%d",&a[i]);
		
		if(a[i]%2==0)
		c++;
		else
		d++;
	}
	printf("\n the array is\n");
	for(i = 0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\nthe number of even elements in the array is %d ",c);
	printf("\nthe number of odd elements in the array is %d ",d);
	return 0;
}
