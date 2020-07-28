#include<stdio.h>

int main()
{
	int i,j,r,c,a[20][20],b[20][20],d[20][20];
	
	printf("\n enter the rows");
	scanf("%d",&r);
	printf("\n enter the cols");
	scanf("%d",&c);
	
	printf("\n enter the first matrix\n");
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("\n enter the second matrix\n");
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	
	printf("\n The addition of matrix\n");
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			d[i][j]=a[i][j]+b[i][j];
			printf("%d ",d[i][j]);
		}
		printf("\n ");
	}
	
	return 0;
}
