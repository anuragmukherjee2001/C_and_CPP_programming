#include<stdio.h>

int main(){

    int sum = 0, num, i;

    printf("Enter the last natural numbers you want the sum of\n");
    scanf("%d", &num);

    for (i = 1; i <= num; i++)
    {
        sum = sum + i;
    }

    printf("Sum of first %d natural numbers is %d ", num, sum);

    return 0;
    
}