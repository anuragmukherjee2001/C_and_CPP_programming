#include<stdio.h>

union sample{
	
	int a;
	char b[9];
	float d;
	char c;
};

int main()
{
	printf("%d",sizeof(union sample));
	return 0;
}

