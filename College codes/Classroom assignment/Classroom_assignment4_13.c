#include<stdio.h>
#include<string.h>
 
int main() 
{
 
    char str[100], part1[100], part2[100];
    int l, m, i, k;
  
    
    printf("\n Enter a string ");
    gets(str);
   
    l = strlen(str);
  
    m = l/2;
    
    for(i = 0; i < m; i++)
	{
        part1[i]= str[i];
    }
    part1[i] = '\0';
  
    
    for(i = m, k = 0; i < l; i++, k++)
	{
 		part2[k]= str[i];
    }
  
    
    printf("first part : %s\n",part1);
    printf("second part : %s\n",part2);
 
    return 0;
}
