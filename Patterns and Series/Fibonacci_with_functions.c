#include<stdio.h>

int fibo()
{
	int n1 = 0,n2 = 1,n3, num,i;
	printf("\n enter the number of elements: ");
	scanf("%d",&num);
	printf("\n %d \t %d",n1,n2);
	
	for(i = 2; i<num; i++)
	{
		n3 = n1 + n2;
		printf("\t %d",n3);
		n1 = n2;
		n2 = n3;
	}
	return 0;
}


int main(){
	
	fibo();
	return 0;
}