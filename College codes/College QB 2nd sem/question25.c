// Danger dont run this program!!! Its an Infinite loop 


#include <stdio.h>
int main()
{
    int n;
    for (n = 7; n != 0; n--)
        printf("n = %d", n--);
    return 0;
}