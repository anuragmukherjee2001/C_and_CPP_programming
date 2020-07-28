#include<stdio.h>

int main()
{
	printf("\n tricked");
	int i = -5;
	
	while(i <= 5)
	{
		if(i >= 0)
			break;
		
		else
		{
			i++;
			continue;
		}
		
		printf("\n NESO");		
	}	
	return 0;	
}
