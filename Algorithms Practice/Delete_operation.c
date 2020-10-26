#include<stdio.h>

int a[5] = {10, 23, 14, 25, 34};
int key = 25;
int n = 5;

int main()
{
    printf("Before\n");
    print_arr();
    delete();
    printf("After\n");
    print_arr();
    return 0;
}

int findElement(){

    int i;

    for (i = 0; i < n; i++)
    {
        if (a[i] == key)
        {
            return i;
        }
       
    }
     return -1;
    
}

int delete(){

    int position = findElement();

    if(position == -1){
        printf("The element does not exists");
        return -1;
    }

    int i;

    for(i = position; i < n-1; i++){

        a[i] = a[i+1];
    }
    return 1;
}

int print_arr(){

    int i;

    for (i = 0; i < n-1; i++)
    {
        printf("%d\n", a[i]);
    }

    return 0;
    
}

// Time Complexity - O(n)