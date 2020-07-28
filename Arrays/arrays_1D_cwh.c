#include <stdio.h>

int main()
{

  int i;

  // int marks[4];

  // marks[0] = 34;
  // marks[1] = 24;
  // marks[3] = 33;
  // marks[2] = 66;

  // printf("\n the marks of student 1 is %d ",marks[0]);
  // printf("\n the marks of student 2 is %d ",marks[1]);
  // printf("\n the marks of student 3 is %d ",marks[2]);
  // printf("\n the marks of student 4 is %d ",marks[3]);
  // printf("\n the marks of student 4 is %d ",marks[4]); // Garbage value

  // int marks[4];

  // for (i = 0; i < 4; i++)
  // {
  //     printf("enter the marks of student %d\n",i+1);
  //     scanf("%d",&marks[i]);
  // }
  // for (i = 0; i < 4; i++)
  // {
  //     printf("The marks of student %d is %d\n",i+1,marks[i]);
  // }

  int marks[4] = {45, 55, 98, 57};

  for (i = 0; i < 4; i++)
  {
    printf("The marks of student %d is %d\n", i + 1, marks[i]);
  }

  return 0;
}