#include<stdio.h>
#include<math.h>
//int main(void)
//{   
//	double val;
//	double sinval;
//    printf("Enter the value \n");
//    scanf("%lf",&val);
//    sinval = sin(val);
//    printf("\n the sin value is %lf",sinval);
//    return 0;
//}    
#include<stdio.h>
#include<math.h>/*hassin(),abs(),andfabs()*/
int main(void)
{
double interval;
int i;
for(i=0;i<30;i++)
{
interval=i/10.0;
printf("sin(%lf)=%lf\t",interval,fabs(sin(interval)));
}
//printf(“\n+++++++\n”);

return 0;
}
