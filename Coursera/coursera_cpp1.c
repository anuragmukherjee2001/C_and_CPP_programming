#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define SIDES 6
#define R_SIDE (rand()%SIDES+1)

int main()
{
	int j,trials,d1,d2,n_dice=2;
	int outcomes[20];
	
	srand(clock());
	printf("\n Enter number of trials ");
	scanf("%d",&trials);
	for(j = 0;j<trials;++j)
	{
		outcomes[(d1=R_SIDE)+(d2=R_SIDE)]++;
	}
	printf("\n probability");
	for(j=2;j<n_dice*SIDES+1;++j)
	{
		printf("\n j=%d p=%lf",j,(double)(outcomes[j])/trials);
	}
	return 0;
}


