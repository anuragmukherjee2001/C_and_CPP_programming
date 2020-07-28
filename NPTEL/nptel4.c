#include<stdio.h>

int main()
{
	f(7);
	return f(7);
}

int f(int n)
{
	static int i = 1;
	if(n>=5)
		return n;
	
	n = n+i;
	i++;
	return f(n);	
}
