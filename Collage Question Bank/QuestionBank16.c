#include<stdio.h>
void main()
{
	char ch;
	int x;
	printf("\n enter the character");
	scanf("%c",&ch);
	ch= (ch == 'A'|| ch == 'E' || ch == 'I' || ch=='O'|| ch=='U')?printf("\n the character is vowel"):printf("\n consonamt");
	
}
