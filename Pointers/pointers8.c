// count vowels and consonants in string using pointers

#include<stdio.h>

int main()
{
	int c=0,v=0;
	char s1[20],*p;
	
	printf("\n enter a string ");
	gets(s1);
	
	p=s1;
	
	while(*p!='\0')
	{
		if(*p=='a' || *p=='e' || *p=='i' || *p=='o' || *p=='u')
		v++;
		
		else
		c++;
		
		p++;
	}
	printf("\n number of vowels is %d",v);
	printf("\n number of consonants is %d",c);
}
