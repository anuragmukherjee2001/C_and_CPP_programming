#include<stdio.h>

int a[5] = {10, 20, 13, 36, 24};
int n = 3;
int key = 25;
int size = 5;

int main()
{
    insert();
    print_arr();

    return 0;
}

int insert(){

    if(size >= n)
    {
        a[n] = key;
        return 1;

    }

    return 0;

}

int print_arr(){

    int i;

    for (i = 0; i < size; i++)
    {
        printf("%d\n", a[i]);
    }

    return 0;
    
}


// Time Complexity - O(1)