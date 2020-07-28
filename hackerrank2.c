#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i = 4;
    double d = 4.0;
    char s[] = "HackerRank ";
    int j,m,l;
    double e;
    char k[100],a[100];
    scanf("%d %lf", &j,&e);
    getchar();
    gets(k);
    printf("%d\n",i+j);
    printf("%.1lf\n", d+e);
    // printf("%s",strcat(s,k));
    // puts(k);
    // strcat(s, k);
    for (l = 0; k[l] != '\0'; ++l, ++m) {
        s[m] = k[l];
    }
    s[m] = '\0';
    // printf("%s",s);
    puts(s);

    
    // Declare second integer, double, and String variables.
    
    // Read and save an integer, double, and String to your variables.
    
    // Print the sum of both integer variables on a new line.
    
    // Print the sum of the double variables on a new line.
    
    // Concatenate and print the String variables on a new line
    // The 's' variable above should be printed first.

    return 0;
}
