#include<stdio.h>

int main()
{
	unsigned short i = 65535;
	
	while(i++ != 0)		// infinite loop
	{
		printf("%d",++i);
	}
	
	printf("\n");
	return 0;
}
