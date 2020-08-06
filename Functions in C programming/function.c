 #include<stdio.h>
//int maxsmax(int []);
int main()
{
	int i,max=0,smax=0,a[5];
	printf("enter elements");
	for(i=0;i<5;i++)
	scanf("%d",&a[i]);
	int n = sizeof(a)/sizeof(a[0]);
	maxsmax(a);
	
}
int maxsmax(int a[])
{
	int i,max,smax;
	max = smax = a[0]; 
	for(i=0;i<5;i++)
	{
		if(a[i]>max)
		{
		smax=max;
		max=a[i];
	}
	else if(a[i]>smax && a[i]!=max)
	smax=a[i];
	}
	printf("maximum =%d second maximum =%d",max,smax);
	return 0;
}
