#include<stdio.h>
#include<string.h>

int copy(char str1[])
{
	char str2[20];
	
	strcpy(str2,str1);
	
	return str2;
}

int main()
{
	char str1[20],str2[20];
	printf("\n enter the string ");
	fgets(str1,20,stdin);
		
	
	printf("\n the copied string is %s ",copy(str1));
	return 0;
}
