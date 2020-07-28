#include<stdio.h>

int main()
{
	int a[100],i,sum = 0,n;
	printf("\n enter the number of elements in the array");
	scanf("%d",&n);
	for(i = 0;i<n;i++)
	{
		printf("enter the element %d: ",i+1);
		scanf("%d",&a[i]);
		sum = sum+a[i];
	}
	printf("the sum of the arrsy is %d",sum);
	return 0;
}
