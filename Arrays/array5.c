//Print the three digits number which are armstrong number in the array

#include<stdio.h>

int main()
{
	int a[20],i,n1,j,n,f,x;
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
	printf("\n");
	
	for(i=0;i<n;i++)
	{
		n1=a[i];
		f=0;
		
		while(n1>0)
		{
			j = n1%10;
			f=f+(j*j*j);
			n1=n1/10;
		}
		
		if(f==a[i])
		printf("%d ",f);
	}
	return 0;
}
