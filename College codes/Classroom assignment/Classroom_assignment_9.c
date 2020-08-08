#include<stdio.h>
//int main()
//{
//   int array[5];
//   int i,sum=0;
//   int *ptr;
//
//   printf("\nEnter array elements (5 integer values):");
//   for(i=0;i<5;i++)
//      scanf("%d",&array[i]);

//   void input();
//   void count();
//   
//   
//}

void input()
{
	int array[5];
   int i,sum=0;
   int *ptr;

   printf("\nEnter array elements (5 integer values):");
   for(i=0;i<5;i++)
      scanf("%d",&array[i]);
}

void count()
{
	int *ptr,ec=0,oc=0,array[5],i;
ptr = array[5];

   for(i=0;i<5;i++) 
   {
     if(*ptr%2==0)
     {
     	ec++;
	 }
	 else
	 {
	 	oc++;
	 }
   }
   printf("\n number of even elements is %d",ec);
   printf("\n number of odd elements is %d",oc);

//   printf("\nThe sum is: %d",sum);	
}

void main()
{
	 input();
	count();
}
