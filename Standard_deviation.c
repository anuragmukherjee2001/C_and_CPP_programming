#include<math.h>
#include<stdio.h>
int main()
{
	float a[9];
	int i;
	float sum1 = 0.0,sum=0.0;
	float mean,sd;
	
	for(i=0;i<9;i++)
	{
		scanf("%f",&a[i]);
		sum = sum+a[i];
		mean = sum/9.0;
		sum1 = sum1+(mean-a[i]);
	}
	sd = sum1;
	printf("\nthe sd is %f",sd);
	return 0;
}
