#include<stdio.h>
#include<string.h>

int main()
{
   char str[100];

   printf("\n Enter a string to reverse ");
   fgets(str,100,stdin);

   strrev(str);

   printf("\n Reverse of the string: %s ", str);

   return 0;
}
