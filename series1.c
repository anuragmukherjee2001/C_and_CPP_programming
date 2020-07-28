#include <stdio.h>
int main()
 {
 	
    float n, i;
    float s = 0.0;
    printf("\n enter the limit");
    scanf("%f",&n);
    for (i = 0; i <= n; i = i + 2)
	{ 
      s = s + 1/i;
       printf("\n %f",s); 
	}
    
    return 0;
}
