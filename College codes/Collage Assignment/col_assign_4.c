#include <stdio.h>
int main()
{
    union s {
        int i;
        char ch[2];
    };
    union s u;
    u.ch[0] = 5;
    u.ch[1] = 2;
    printf("%d, %d, %d\n", u.ch[0], u.ch[1], u.i);
    return 0;
}
