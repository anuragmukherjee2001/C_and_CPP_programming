#include<stdio.h>
#include<string.h>


void main()
{
	char a[]="Hello World";
	char *p;
	
	p=a;
	
	printf("\n %d %d %d %d",sizeof(a),sizeof(p),strlen(a),strlen(p));
}
