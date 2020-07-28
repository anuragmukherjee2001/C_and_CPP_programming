// Counting length of a string Using Pointers

#include<stdio.h>

int main()
{
	int c=0;
	char s1[20],*p;
	printf("\n enter the string ");
	gets(s1);
	
	p=s1;
	
	while(*p!='\0')
	{
		c++;
		p++;
	}
	
	printf("\n the lengh of the string is %d",c);
	return 0;
}
