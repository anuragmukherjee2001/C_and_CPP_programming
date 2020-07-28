// Printing ASCII values of string using Pointers

#include<stdio.h>
int main()
{
	char s[20],*p;
	
	printf("\n enter a string ");
	gets(s);
	
	p=s;
	
	while(*p!='\0')
	{
		printf("\n %d",*p);
		p++;
	}
	return 0;
}

