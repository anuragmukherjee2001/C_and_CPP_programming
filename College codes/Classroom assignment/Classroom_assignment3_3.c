#include<stdio.h>
#include<conio.h>

int main()
{
	int *p1;
	char *p2;
	float *p3;
	
	p1 = (int*)malloc(1*sizeof(int));
	p2 = (char*)malloc(1*sizeof(char));
	p3 = (float*)malloc(1*sizeof(float));
	
	printf("\n enter the value of integer ");
	scanf("%d",p1);
	
	printf("\n enter the value of character ");
	scanf(" %c",p2);
	
	printf("\n enter the value of float ");
	scanf("%f",p3);
	
	printf("\n the value of integer is %d ",*p1);
	printf("\n the value of character is %c ",*p2);
	printf("\n the value of float is %f ",*p3);
	
	free(p1);
	free(p2);
	free(p3);
	
	return 0;
}
