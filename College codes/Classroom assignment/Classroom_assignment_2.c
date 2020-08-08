#include <stdio.h>
//#include <stdlib.h>
#include <math.h>

int cosine()
{
    float  t,sum,x;
    int d;
    int i, n=15;

    

    printf ("Input X Value (in degrees) :");
    scanf ("%f", &x);
    d= x;

    

    x=x*3.1412/180;
    t=1;
    sum=1;

    for (i=1; i<n; i++)
    {
        t=t*pow ( (-1), (float) (2*i-1))*x*x/ (2*i*(2*i-1));

        sum=sum+t;
    }

    

//    for (i =0; i<35; i++)
//    printf ("_"); 
printf ("\n\n");

    printf ("%f",  sum);

//    for (i =0; i<35; i++)
//    printf ("_");
 printf ("\n\n");

//    system ("PAUSE");
    return sum;
}

int main()
{
	int res;
	cosine();
//	cosine(30);
//	cosine(60);
	return 0;
}

