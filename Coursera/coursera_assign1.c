#include<stdio.h>

int main(void)
{
	int ele_seals[1000],n,i;
	double avg,sum=0.0;
	
	printf("\n enter the number of elephant seals you want to enter ");
	scanf("%d",&n);
	
	for(i = 0;i<n;i++)
	{
		printf("\n enter the weight of elephant seal %d ",i+1);
		scanf("%d",&ele_seals[i]);
		sum = (ele_seals[i]+ele_seals[i+1])/n;
	}
//	avg = sum/(double)n;
	printf("\n average weight of entered elephant seals is %lf ",sum);
	return 0;
}
