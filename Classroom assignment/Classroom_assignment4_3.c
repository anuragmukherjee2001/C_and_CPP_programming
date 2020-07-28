#include<stdio.h>

void merge(char *s1, char *s2)
{
	while(*s1!='\0')
		s1++;
	while(*s2!='\0')
	{
		*s1=*s2;
		s1++;
		s2++;
	}
	*s1='\0';
}

int main()
{
	char str1[10],str2[10];
	printf("\n Enter the string:");
	gets(str1);
	printf("\n enter the second string ");
	gets(str2);
	merge(str1,str2);
	printf("%s ",str1);
	return 0;
}
