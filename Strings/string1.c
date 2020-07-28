// Program to read a string and count its upper case, Lower case, digits and special symbols

#include<stdio.h>

int main()
{
	char str[20];
	int i,c1=0,c2=0,c3=0,c4=0;
	printf("\nenter the string ");
	gets(str);
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]>=65 && str[i]<=90)
		{
			c1++;
		}
		else if(str[i]>=97 && str[i]<=122)
		{
			c2++;
		}
		else if(str[i]>=48 && str[i]<=57)
		{
			c3++;
		}
		else
		{
			c4++;
		}
	}
	printf("\n the number of upper case letters is %d",c1);
	printf("\n the number of lower case letters is %d",c2);
	printf("\n the number of digits  is %d",c3);
	printf("\n the number of special characters is %d",c4);
	return 0;
}
