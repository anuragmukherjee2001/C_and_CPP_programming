#include <iostream>
#include <string.h>

using namespace std;

int main(){

    // char p[] = "send";
    // char t;
    // int i, j;

    // for (i = 0, j = strlen(p); i < j; i++)
    // {
    //     t = p[i];
    //     p[i] = p[j - 1];
    //     p[j-i] = t;
    // }
    // printf("%s", p);
    // return 0;

    int i = 0, x, y;
    int a[] = {1, 2, 3, 4, 5, 6};
    x = a[i++];
    x += a[++i];
    y = x++;
    cout << x << " " << y; 
    
}