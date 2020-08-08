#include<stdio.h>

int main()
{
	int x = 9;
	if(10)
		printf("%d",++x);
	else
		printf("%d",x++);
	return 0;		
}
