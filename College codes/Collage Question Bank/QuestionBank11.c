#include<stdio.h>
int main()
{
	int fact = 1, i;
	for(i = 0;i < fact; i++)
	{
		fact = fact*i;
		printf("%d",fact);
	}
	return 1;
}
