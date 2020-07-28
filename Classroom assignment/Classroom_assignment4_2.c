#include<stdio.h>

void length()
{
	int c = 0,i;
	char str[100];
	printf("\n enter the string ");
	fgets(str,100,stdin);
	
	for(i=0;str[i]!='\0';i++)
	{
		c=c+1;
	}
	printf("\n the length of the string is %d ",c-1);
}

int main()
{
	length();
	return 0;
}
