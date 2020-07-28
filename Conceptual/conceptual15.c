#include<stdio.h>

int main()
{
	printf("Tricked");
	int x;
	for(x=-1;x<=10;x++)
	{
		if(x<5)
		{
			continue;
		}	
		else
		{
			break;
		}
		printf("abc\n");			
	}
	return 0;
}
