// Pass array into a pointer using function

#include<stdio.h>

void print(int *);

int n;

int main()
{
	int a[10],i;
	printf("\n enter the number of elements ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	print(a);
	return 0;	
}

void print(int *p)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("\t %d", *p);
		p++;
	}
}
