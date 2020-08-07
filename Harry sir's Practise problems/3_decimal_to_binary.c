#include<stdio.h>

int main(){

    int n = 4, rem, i = 0, j;
    int a[10];
    
    while(n){
        rem = n % 2;
        n = n / 2;
        a[i] = rem;
        i++;

    }

    for (j = i-1; j >= 0 ; j--)
    {
        printf("%d", a[j]);
    }
    
    return 0;

}