// String Concatenation Using pointers

#include<stdio.h>

int main()
{
	int i;
	char s1[20],s2[20],*p1,*p2;
	
	printf("\n enter first string");
	gets(s1);
	
	printf("\n enter second string");
	gets(s2);
	
	p1=s1;
	
	
	while(*p1!='\0')
	{
		p1++;
	}
	
	p2=s2;
	
	while(*p2!='\0')
	{
		*p1=*p2;
		p1++;
		p2++;
	}
//	*p1='\0';
	printf("\n the final string is %s",s1);
}
