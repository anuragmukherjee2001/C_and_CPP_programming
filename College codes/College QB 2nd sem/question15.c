#include<stdio.h>

void main()
{
    int x = 1, i, y = 2;
    for (i = 0; i < 5; i++)
    {
        x << 1;
        y = x + i;
    }
    printf("%d, %d", x, y);
}