#include<stdio.h>
int main()
{
	int i,j;
	for(i=1;i<=4;i++)
	{
		for(j=0;j<i;j++)
		{
			if(j%2==0)
			printf("1");
			else if(j%2!=0)
			printf("0");
			
		}
		printf("\n");
	}
	return 0;
}
