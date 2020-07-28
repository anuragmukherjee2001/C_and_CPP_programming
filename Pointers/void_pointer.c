// Void pointer

// Void pointer can store address of any type of variable

#include<stdio.h>

int main()
{
	int a=5;
	float b=10.5;
	void *p;
	p=&a;
	printf("\n Value of a=%d",*(int*)p);
	p=&b;
	printf("\n Value of b=%f",*(float*)p);
	return 0;
}
