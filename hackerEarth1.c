#include<stdio.h>

int main()
{
	int n,l,w,h,i;
	printf("enter the default length");
	scanf("%d",&l);
	printf("\n enter the number of photos you want to enter");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d %d",&w, &h);
		if(w<l || h<l)
		{
			printf("UPLOAD ANOTHER");
		}
		else
		{
			if(w==l && w>=l)
			{
				printf("ACCEPTED");
			}
			else
			printf("CROP IT");
		}
		w = 0;
		h = 0;
	}
	return 0;
}
