#include<stdio.h>

int fact(int n){

    if (n == 0 || n == 1)
    {
        return 1;
    }
    
    else
    {
        return n * fact(n - 1);
    }
    
    
}

int main(){

    int n;

    printf("Enter the value of number for factorial: ");
    scanf("%d", &n);

    int factorial = fact(n);
    printf("The value of the factorial is %d ", factorial);
    return 0;
}