// Counting length of strings

#include<stdio.h>
void main()
{
	char str[20];
	int i,c=0;
	printf("\nenter the string ");
	gets(str);
	for(i=0;str[i]!='\0';i++)
	{
		c++;
	}
	printf("\n the length of the string is %d",c);
	
}
