#a simple problem of loop

#include<stdio.h>
void main()
{
	int sum = 0,i;
	for(i = 0; i <= 10; i++)
	{
		if(i%2)
			continue;
			sum = sum + i;
			printf("%d",sum);
	}
}
