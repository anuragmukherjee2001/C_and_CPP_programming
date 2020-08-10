#include<stdio.h>

// int i;
void display(int arr[], int n){
    int i;

    for (i = 0; i < n; i++)
    {
        printf("%d\n", arr[i]);
    }
    printf("\n");
}

int insert(int arr[], int size, int element, int capacity, int index){
    if (size >= capacity)
    {
        return -1;
    }
    int i;
    for (i = size - 1; i >= index; i--)
    {
        arr[i+1] = arr[i];
    }
    
    arr[index] = element;
    return 1;
    
}

int main(){

    int arr[100] = {1,2,3,4};
    int size = 4;
    int index = 3;
    int element = 45;

    display(arr, size);
    insert(arr, size, element, 100, index);
    size = size + 1;
    display(arr, size);

    return 0;
}
