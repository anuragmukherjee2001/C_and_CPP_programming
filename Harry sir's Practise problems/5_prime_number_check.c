#include<stdio.h>

int main()
{
    int n = 23, i;
    int isPrime = 1;
    for ( i = 2; i * i < n; i++)
    {
        if(n % i ==0){
            isPrime = 0;
        }
    }

    if (isPrime)
    {
        printf("The number %d is prime", n);
    }

    else
    {
        printf("The number %d is not prime", n);
    }
    
    return 0;
    
    
}