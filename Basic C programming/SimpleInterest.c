#include<stdio.h>
int main(void)
{
	int rate = 10,p = 3000, y = 2;
	int SI,amt;
	
	SI = (p*rate*y)/100;
	amt = p + SI;
	printf("\n the SI is %d",SI);
	printf("\n the final amount is %d",amt);
	return 0;
}
