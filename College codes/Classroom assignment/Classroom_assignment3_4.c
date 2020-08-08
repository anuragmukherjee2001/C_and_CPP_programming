#include<stdio.h>
#include<stdlib.h>

void main()
{
	int n;
	char *text;
	
	printf("\n enter the range of the text ");
	scanf("%d",&n);
	text = (char*)malloc(n*sizeof(char));
	printf("\nenter the text ");
	fflush(stdin);
	gets(text);	
	printf("the text is %s\n ",text);
	free(text);
}
