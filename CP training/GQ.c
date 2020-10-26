#include <stdio.h>
#include <string.h>

void swap(char *str1, char *str2){
    char *temp = str1;
    str1 = str2;
    str2 = temp;
}

int main(){

    // char p[] = "send";
    // char t;
    // int i, j;

    // for (i = 0, j = strlen(p); i < j; i++)
    // {
    //     t = p[i];
    //     p[i] = p[j - 1];
    //     p[j-i] = t;
    // }
    // printf("%s", p);
    // return 0;

    // int i = 0, x, y;
    // int a[] = {1, 2, 3, 4, 5, 6};
    // x = a[i++];
    // x += a[++i];
    // y = x++;
    // printf("%d", x); 
    // printf("%d", y); 

    //  int a;
    //  int b[7] = {-2, -7, 3, 4, 5, 9, 11};
    //  int *ptr = (int*)(&a+1);
    //  printf("%d %d", *(a+1), *(ptr-2));
    //  return 0;

    char str1[] = "GeeksQuiz";
    char str2[] = {'g', 'e','e', 'k', 's', 'Q','u','i','z'};
    // swap(str1, str2);
    // printf("str1 is %s and str 2 is %s", str1, str2);
    // return 0;
    int n1 = sizeof(str1)/sizeof(str1[0]);
    int n2 = sizeof(str2)/sizeof(str2[0]);
    printf("n1 = %d, n2 = %d", n1, n2);
    return 0;



}