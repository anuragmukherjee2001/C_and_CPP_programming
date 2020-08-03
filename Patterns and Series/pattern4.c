#include<stdio.h>
int main()
{
	int i,j;
	i = i+64;
	for(i=70;i>=64;i--)
	{
		for(j=i;j>=65;j--)
		{
			printf("%c",(char)j);
		}
		printf("\n");
	}
	return 0;
}
