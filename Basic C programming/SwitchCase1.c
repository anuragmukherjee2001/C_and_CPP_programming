#include<stdio.h>

int main()
{
	char ch;
	printf("\n enter an alphabet");
	scanf("%c",&ch);
	switch(ch)
	{
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
			printf("\n the alphabet is a vowel");
			break;
			
		default:
			printf("\n the alphabet is a consonant");
			break;		
	}
	return 0;
}
