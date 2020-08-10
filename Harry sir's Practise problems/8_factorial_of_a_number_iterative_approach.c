#include<stdio.h>

int fact(int n){

    int i, val = 1;

    for (i = n; i > 1; i--)
    {
        val = val * i;
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