#include <stdio.h>

int main()
{
    int arr[5], i = -1, z;
    while (i < 5)
        arr[i] = ++i;
    for (i = 0; i < 5; i++)
        printf("%d, ", arr[i]);
    return 0;
}