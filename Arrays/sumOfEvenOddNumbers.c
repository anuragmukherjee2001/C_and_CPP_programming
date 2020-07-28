#include<stdio.h>

int main()
{
	int i,sumeven = 0, sumodd = 0;
	for(i = 1; i < 100; i++)
	{
		if(i % 2 == 0)
		{
			sumeven  = sumeven + i;
		}
		else
		{
			sumodd = sumodd + i;
		}
   }
		printf("\n the sum of even numbers is %d",sumeven);
		printf("\n the sum of odd numbers is %d",sumodd);
	
	return 0;
}
