#include<stdio.h>

void main(){
    int i = 0, k;
    label: printf("%d", i);
    if (i == 0)
    {
        goto label;
    }
    
}