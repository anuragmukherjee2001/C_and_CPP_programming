#include<stdio.h>
#include<string.h>

int main()
{
	int count1 = 0,count2 = 0,count3 = 0,i;
	char str[100];
	
	printf("\n enter the string ");
	fgets(str,100,stdin);
	
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u')
		{
		count1++;
		}
		else if(str[i]==' ')
		{
		count2++;
		}
		else
		{
		count3++;
		}
	}
	printf("\n the number of times vowels come is %d",count1);
	printf("\n the number of times space is %d",count2);
	printf("\n the number of times the consonants comes is %d",count3-1);
	
	return 0;
}
