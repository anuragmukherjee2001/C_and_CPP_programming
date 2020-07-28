#include<stdio.h>
#include<string.h>

int compare(char str1[],char str2[])
{

	int a;		
	
	a = strcmp(str1,str2);
	if(a==0)
	{
		printf("\n same");
	}
	else
	printf("not same");

	return 0;
}

int main()
{
	char str1[20],str2[20];
	printf("\n enter the first string ");
	fgets(str1,20,stdin);
		
	printf("\n enter the second string ");
	fgets(str2,100,stdin);
	compare(str1,str2);
	return 0;
}
