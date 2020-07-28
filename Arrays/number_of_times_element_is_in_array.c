#include<stdio.h>

int main()
{
	int a[20],i,c1=0,c2=0,n;
	printf("\n enter number of elements");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\n enter the number which you want to count");
	scanf("%d",&c1);
	
	for(i=0;i<n;i++)
	{
		if(a[i]==c1)
			c2++;
	}
	printf("\n the number of times the element is present is %d",c2);
	getch();
}
	
