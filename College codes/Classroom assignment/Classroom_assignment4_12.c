#include<stdio.h>
#include<string.h>

int main()
{
	int count = 0,i;
	char str[100],c;
	
	printf("\n enter the string ");
	fgets(str,100,stdin);
	
	printf("\n enter the character to find its frequency ");
	c = getchar();
	
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]==c)
		count++;
	}
	printf("\n the number of times the character is %d",count);
	
	return 0;
}
