#include<stdio.h>
//#include<stdlib.h>
int main()
{
	int a[10][10],trans[10][10];
	int i,j,r,c;
	printf("enter the rows and columns of matrix A:\n");
	scanf("%d%d",&r,&c);
	printf("\n enter the elements of the matrix A");
	printf("\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			trans[j][i]=a[i][j];	
		}		
	}
	
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d ",trans[i][j]);	
		}		
		printf("\n");
	}
	
	
	return 0;
}
