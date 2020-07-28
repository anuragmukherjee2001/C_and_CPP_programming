#include<stdio.h>

int main()
{
	int c;
	int result,a,b;
	printf("\n enter two numbers");
	scanf("%d %d",&a,&b);
	printf("\n 1.add\t 2.sub\t 3.mult 4.div");
	scanf("%d",&c);
	switch(c)
	{
		case 1:
			result = a+b;
			printf("\n %d",result);
			break;
		case 2:
			result = a-b;
			printf("\n %d",result);
			break;
		case 3:
			result = a*b;
			printf("\n %d",result);
			break;
		case 4:
			result = a/b;
			printf("\n %d",result);
			break;
		default :
			printf("\n none");
			
			
			
	}
	return 0;
}
