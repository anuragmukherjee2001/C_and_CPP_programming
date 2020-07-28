#include<stdio.h>

int main()
{
    int i, j, k;
    
    char str[100];
    char rev[100];
    
    printf("\n Enter a string ");
    fgets(str,100,stdin);
    printf("\n The original string is %s ", str);
    for(i = 0; str[i] != '\0'; i++);
    {
        k = i-1;
    }
    for(j = 0; j <= i-1; j++)
    {
        rev[j] = str[k];
        k--;
    }
    printf("\n The reverse string is %s ", rev);
    
    return 0;
}
