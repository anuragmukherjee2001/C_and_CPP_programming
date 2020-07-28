#include<stdio.h>

int main()
{
	int x,ans;
	printf("\n enter a number");
	scanf("%d",&x);
	x = x<0?printf("the number is negetive"):(x>0?printf("the number is positive"):printf("the number is zero"));
	return 0;
}
