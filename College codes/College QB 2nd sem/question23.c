#include <stdio.h>

int main()
{
    int ch;
    scanf("%d", &ch);
    switch (ch, ch + 1)
    {
    case 1:
        printf("1\n");
        break;
    case 2:
        printf("2");
        break;
    }
    return 0;
}