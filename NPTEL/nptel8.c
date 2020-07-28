#include<stdio.h>

//int main()
//{
//	printf("%d",func(513,2));
//	return 0;	
//}

unsigned int func(unsigned int n, unsigned int r)
{
	if(n>0)
	{
		return (n%r+func(n/r,r));
	}
	else
	{
		return 0;
	}
}

int main()
{
	printf("%d",func(513,2));
	return 0;	
}
