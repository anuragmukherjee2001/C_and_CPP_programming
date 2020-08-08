#include<stdio.h>

int gcd_hcf(int n1, int n2)
{
	int t1,t2,r;
	t1=n1;
	t2=n2;
	
	while(n2)
	{
		r = n1%n2;
		n1=n2;
		n2=r;
	}	
//	printf("the GCD of two numbers is %d",n1);
//	printf("The LCM of two numbers is %d",(t1*t2)/n1);
	return b;
} 
int lcm(int n1,int n2)
{
	
}

int main()
{
	int a,b;
	printf("\n enter two numbers");
	scanf("%d %d",&a,&b);
	gcd_gcd(a,b);
	return 0;
}
