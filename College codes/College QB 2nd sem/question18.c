#include <stdio.h>

int main()
{
    int arr[5] = {1, 2, 3, 4, 5}, i, *p;
    for (p = arr + 4, i = 0; i < 5; i++)
        printf("%d", p[-i]);
    return 0;
}