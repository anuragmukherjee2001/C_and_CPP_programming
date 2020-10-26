#include<stdio.h>



int main()
{
    char s[] = "Anurag";
    int len = 0;
    while (s[len] != '\0')
    {
        len++;
    }
    printf("The length of the string is %d\n", len);

    int i;
    char temp;
    for(i = 0; i <= (len-1)/2; i++){
        temp = s[i];
        s[i] = s[len-1-i];
        s[len-1-i] = temp;
    }

    printf("The string now is %s", s);
     
    return 0;
}
