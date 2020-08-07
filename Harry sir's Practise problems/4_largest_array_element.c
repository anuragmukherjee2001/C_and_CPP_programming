#include <stdio.h>

int returnMax(int array[], int n)
{

    int max = 0, i;

    for (i = 0; i < n; i++)
    {
        if (array[i] > max)
        {
            max = array[i];
        }
    }
    return max;
}

int main()
{

    int arr[] = {1, 22, 3, 14, 5, 6, 44};

    int max = returnMax(arr, 7);
    printf("The maximum element in the array is %d", max);

    return 0;
}