#include<stdio.h>

int main()
{
static int a = 3;
    printf("%d", a--);
    return 0;
}