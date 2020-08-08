#include<stdio.h>
#include<string.h>

void swap_case(char str[])
{
	int c;
	while (str[c] != '\0')
	 {
      if (str[c] >= 'a' && str[c] <= 'z')
	   {
         str[c] = str[c] - 32;
       }
      else if(str[c] >= 'A' && str[c] <= 'Z') 
      {
      	str[c] = str[c] + 32;
	  }
      c++;
   }
    
}

int main()
{
	char str[100];
   
   printf("Enter a string to convert it into lower case\n");
   fgets(str,100,stdin);
   
   swap_case(str);
   
   printf("The string in lower case: %s\n", str);
     
   return 0;
}
