#include<stdio.h>

int main(){

  int num, i;
  printf("Enter the value of the number whose multiplication table is to be printed ");
  scanf("%d", &num);
  printf("The multiplication table of %d is\n", num);

  for(i = 1; i < 11; i++)
  {
      printf("%d x %d = %d", num, i, num * i);
      printf("\n");
  }  

  return 0;
}