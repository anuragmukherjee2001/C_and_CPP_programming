#include<stdio.h>

int main()
{
	int i = 1024,c=0;
	for(;i;i>>=1)
	{
		printf("Hello,World\n");
		c++;
	}
	printf("\n %d",c);
}
