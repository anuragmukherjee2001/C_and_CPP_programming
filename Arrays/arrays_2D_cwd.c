#include <stdio.h>

int main()
{

    int marks[4][4] = {{15, 69, 76, 44}, {46, 78, 27, 46}, {22,69,79,85}, {46,84,55,22}};
    int i, j;

    for (i = 0; i < 4; i++)
    {

        for (j = 0; j < 4; j++)
        {
            // printf("The marks of student %d, %d is %d\n", i + 1,j+1, marks[i][j]);
            printf("%d ",marks[i][j]);
            
        }
        printf("\n");
    }
    return 0;
}