#include<stdio.h>

//int x = 0;
//void fun(char *k)
//{
//	k++;
//	k[2] = 'm';
//	printf("%c\n",*k);
//}

void m(int *p)
{
	int i = 0;
	for(i = 0;i<5;i++)
	{
		printf("%d\t",p[i]);
	}
}


void main()
{
//	int *const ptr = &x;
//	int x = 0;
//	int *ptr = &x;

//	printf("%d\n",*ptr);
//	char *a[1] = {"hello"};
//	int i = 0;
//	for(i=0;i<10;i++)
	
//		printf("%s\n",a);
//		printf("%s",a[0]);
//	printf("%d\n",sizeof(a[1]));
//	fun(s);

int a[5] = {6,5,3};
m(&a);
	
}


