// Finding out maximum and minimum from an array using pointer

#include<stdio.h>

int main()
{
	int a[20],n,i,*p,max=0,min=0;
	
	printf("\n enter the number of elements");
	scanf("%d",&n);
	
//	p = %a[0];
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
//		p++;
	}
	p=a;
	
	for(i=0;i<n;i++)
	{
		if(*p>max)
		{
			max=*p;
		}
		p++;
	}
	min=max;
//	printf("%d",min);
	for(i=0;i<n;i++)
	{
		if(*p<min)
		{
			min=*p;
		}
		p++;
	}
	
	printf("\n the maximum is%d",max);
	printf("\n the minimum is%d",min);
	return 0;
}
