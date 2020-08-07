#include<stdio.h>

int main(){

    int sum = 0, num, i;

    printf("Enter the last natural numbers you want the sum of\n");
    scanf("%d", &num);

    // This algorithm runs in constant time

    sum = (num * num + num)/2;

    printf("Sum of first %d natural numbers is %d ", num, sum);

    return 0;
    
}