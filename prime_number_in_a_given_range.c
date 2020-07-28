#include<stdio.h>
int main()
{
	int i,flag,x=10,y=100;
	while(x<y)
	{
		flag = 0;
		for(i = 2; i<= x/2; i++)
		{
			if(x%i == 0)
			{
				flag = 1;
				break;
			}
		}
		if(flag == 0)
			printf("%d \t ",x);
		x++;	
	}
	return 0;
}
	
