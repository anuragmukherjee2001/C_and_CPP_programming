// String comparison using pointers

#include<stdio.h>

int main()
{
	char s1[20],s2[20],*p1,*p2;
	int f=0;
	
	printf("\n enter first string ");
	gets(s1);
	
	printf("\n enter second string ");
	gets(s2);
	
	p1=s1;
	p2=s2;
	
	while(*p1!='\0' || *p2!='\0')
	{
		if(*p1 != *p2)
		{
			f = 1;
			break;
		}
		p1++;
		p2++;
	}
	
	if(f==0)
	printf("\n the strings equal");
	
	else
	printf("\n the strings are not equal");
	return 0;
}
