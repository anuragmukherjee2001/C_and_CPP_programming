#include <stdio.h>

void m()
{
    static int x = 5;
    x++;
    printf("%d", x);
}
void main()
{
    m();
    m();
}