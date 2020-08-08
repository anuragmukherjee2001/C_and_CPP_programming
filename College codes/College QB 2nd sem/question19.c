#include<stdio.h>

void pr()
{

    static int i = 1;
    printf("%c", (65 + i++));
}
int main()
{
    void pr();
    pr();
    pr();
    pr();
    return 0;
}