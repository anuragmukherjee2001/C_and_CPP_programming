#include<stdio.h>

int a[] = {10, 18, 15, 33, 6};
int start = 0;
int end = 4;
int size = 5;

void reverse(){

    int temp;

    while (start < end) 
    {
        a[start] = temp;
        a[start] = a[end];
        a[end] = temp;
        start++;
        end--;

    }
    
}

int print_arr(){

    int i;

    for (i = 0; i < size; i++)
    {
        printf("%d\n", a[i]);
    }

    return 0;
    
}

int main()
{
    print_arr();
    reverse();
    printf("After reversing\n");
    print_arr();
    return 0;
}

// Time Complexity - O(logn)