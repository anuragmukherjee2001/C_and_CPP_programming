#include<stdio.h>

int main()
{
	int count = 0,i;
	char str[100];
	
	printf("\n enter the string ");
	fgets(str,100,stdin);
	
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]=='e' || str[i]=='E')
		count++;
	}
	printf("\n the number of times the letter e occurs is %d",count);
	
	return 0;
}
