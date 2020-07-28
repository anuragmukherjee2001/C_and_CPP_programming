// passing string into functions into functions

#include<stdio.h>

void print(char*);

int main()
{
	char str[10];
	printf("\n enter a string ");
	gets(str);
	
	print(str);
	return 0;
}

void print(char *p)
{
	while(*p!='\0')
	{
		printf("%c",*p);
		p++;
	}
}
