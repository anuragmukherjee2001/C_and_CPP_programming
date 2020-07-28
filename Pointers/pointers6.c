// Copy a string into another using pointer

#include<stdio.h>
int main()
{
	char s1[10],s2[10],*p1,*p2;
	printf("\n enter a string ");
	gets(s1);
	
	p1=s1;
	p2=s2;
	
	while(*p1!='\0')
	{
		*p2=*p1;
		p1++;
		p2++;
	}
	*p2='\0';
	printf("\n Copied string %s",s2);
	return 0;
}
