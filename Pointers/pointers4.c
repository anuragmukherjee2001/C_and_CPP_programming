// Call by reference

#include<stdio.h>

void swap(int*,int*);
int main()
{
	int a,b;
	printf("\n enter two values");
	scanf("%d %d",&a,&b);
	printf("\n before swaping a=%d and b=%d",a,b);
	
	swap(&a,&b);
	
	printf("\n after swaping a=%d and b=%d",a,b);
	
	return 0;
}

void swap(int *p, int *q)
{
	int r;
	r=*p;
	*p=*q;
	*q=r;
}
