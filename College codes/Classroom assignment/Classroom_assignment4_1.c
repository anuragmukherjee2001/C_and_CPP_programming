#include<stdio.h>
#include<string.h>

int main()
{
	int length1, length2,a;
	char str1[100],str2[100],str3[100],str4[100];
	printf("\n enter the first string ");
	gets(str1);
	
	printf("\n enter the second string ");
	gets(str2);
	
	printf("\n the first string is %s",str1);
	printf("\n the second string is %s",str2);
	
	length1 = strlen(str1);
	length2 = strlen(str2);
	
	printf("\n the length of the first string is %d ",length1);
	printf("\n the length of the second string is %d ",length2);
	
	strcat(str1,str2);
	
	puts(str1);
	
	strrev(str1);
	puts(str1);
	
	a=strcmp(str1,str2);
	
	if(a==0)
	{
		printf("\n the strings are same");
	}
	else
	{
		printf("\n the strings are absent");
	}
	
	strcpy(str1,str2);
	puts(str1);
		
	return 0;
}
