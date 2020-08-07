#include<stdio.h>

int main()
{
	int x,y,z,max;
	printf("\n enter the first number");
	scanf("%d",&x);
	printf("\n enter the second number");
	scanf("%d",&y);
	printf("\n enter the third number");
	scanf("%d",&z);
	max = x>y && x>z?x:(y>x && y>z?y:z);
	printf("%d",max); 
}
