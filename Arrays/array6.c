//print the reverse of an array by swaping elements

#include<stdio.h>

int main()
{
	int a[20],i,c1=0,c2=0,n;
	printf("\n enter number of elements ");
	scanf("%d",&n);

	printf("\nenter the elements ");
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}

	printf("\n the elements of the array are...\n");
	for (i = 0; i < n; i++)
	{
		printf("%d \t", a[i]);
	}
	
	return 0;
}
