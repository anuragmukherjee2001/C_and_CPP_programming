#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a[10][10],b[10][10],c[10][10];
	int i,j,k,ar,ac,br,bc,sum=0;
	printf("enter the rows and columns of matrix A:\n");
	scanf("%d%d",&ar,&ac);
	printf("\n enter the elements of the matrix a");
	printf("\n");
	for(i=0;i<ar;i++)
	{
		for(j=0;j<ac;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("enter the rows and columns of matrix B:\n");
	scanf("%d%d",&br,&bc);
	if(br!=ac)
	{
		printf("sorry we cannot multiply");
		exit(0);
	}
	else
	{
		printf("\n enetr the elements of matrix b");
		printf("\n");
		for(i=0;i<br;i++)
		{
			for(j=0;j<bc;j++)
			{
				scanf("%d",&b[i][j]);
			}
		}
	}
	printf("\n");
	for(i=0;i<ar;i++)
	{
		for(j=0;j<bc;j++)
		{
			for(k=0;k<br;k++)
			{
				sum = sum+a[i][k]*b[i][k];
			}
			c[i][j]=sum;
			sum=0;
		}
	}
	printf("\n the resultant matrix is");
	printf("\n");
	for(i=0;i<ar;i++)
	{
		for(j=0;j<bc;j++)
		{
			printf("%d ",c[i][j]);
		}
		printf("\n");
	}
	return 0;
}
