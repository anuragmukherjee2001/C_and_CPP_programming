// Count how many vowel and consonants are available in string by passing string into function using pointer

#include<stdio.h>

void count(char*);

int main()
{
	char str[10];
	printf("\n enter String = ");
	gets(str);
	
	count(str);
	return 0;
}

void count(char *p)
{
	int c1=0,c2=0;
	
	while(*p!='\0')
	{
		if(*p=='A'|| *p=='E'|| *p=='I'|| *p=='O'|| *p=='U'|| *p=='a'|| *p=='e'|| *p=='i'|| *p=='o'|| *p=='u')
		c1++;
		
		else
		c2++;
		
		p++;
		
	}
	
	printf("\n the number of vowels = %d ",c1);
	printf("\n the number of consonants = %d ",c2);
}
