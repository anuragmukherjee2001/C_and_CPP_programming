#include <stdio.h>

int main()
{
    char *ptr;
    ptr = "Algorithm";

    printf("%c\n", *&*&*ptr);
    return 0;
}