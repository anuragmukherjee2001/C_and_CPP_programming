#include<stdio.h>
#include<math.h> 
int main(void)
{ 
	double sin_interval,cos_interval;
	int i;
	
	printf("\n The sine table is:");
	for(i = 0; i <=10; i++)
	{
	 sin_interval = i/10.0;
	 printf("\n sin( %lf ) = %lf \t", sin_interval, fabs(sin(sin_interval)));
	}
	printf("\n\n");
	printf("\n The cosine table is");
	for(i = 0; i <=10; i++)
	{
	 cos_interval = i/10.0;
	 printf("\n cos( %lf ) = %lf \t", cos_interval, fabs(cos(cos_interval)));
	}
		
	
return 0;
}
