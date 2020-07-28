#include<stdio.h>
#include<string.h>

int main()
{
	int count = 0,i;
	char str[100],c;
	
	printf("\n enter the string ");
	fgets(str,100,stdin);
	
	printf("\n enter the character to find ");
	c = getchar();
	
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]==c)
		{
		count++;
		break;
		}
	}
	if(count==1)
	{
	printf("\n the character is found");
	}
	else
	{
		printf("\n the character is absent");
	}
	return 0;
}
