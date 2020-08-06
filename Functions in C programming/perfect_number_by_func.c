#include<stdio.h>

int main()
{
	int num,s;
	printf("Give an integer number");
	scanf("%d",&num);
	s = checkPerfect(num);
	if(s==num)
	{
		printf("\n perfect");
	}
	else
	printf("\n it is not");
	return 0;
}

int checkPerfect (int number)
{
	int a = 1,sum=0;
	while(a<number)
	{
		if(number%a==0)				
		sum = sum+a;
		a++;
	}
	return(sum);
}
