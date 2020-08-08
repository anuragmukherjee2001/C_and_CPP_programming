#include<stdio.h>

int main()
{
    char a[5]="Smith";
    char * ptr;
    ptr=a;
    printf ("%c\t",*(ptr+2));
    printf("%c",*(ptr+5));
}