#include<stdio.h>

int mat[10][10];
void matin()
{
	int i,j;
	printf("give me values");
	for(i = 0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&mat[i][j]);
		}
	}
}

void matpr()
{
	int i,j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%3d",mat[i][j]);
		}
		printf("\n");
	}
}
int main()
{
	int mat[10][10];
	matin();
	matpr();
	return 0;
}
