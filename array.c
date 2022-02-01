#include <stdio.h>

int main()
{
    // This is the 1D Array

    //  int marks[4];
    // int marks2[4] = {23, 545,46,34};

    // for (int i = 0; i < 4; i++)
    // {
    //     printf(" The marks is %d\n", marks2[i]);
    // }

    // for (int i = 0; i < 4; i++)
    // {
    // printf("Enter the number of %d student:-\n", i+1);
    // scanf("%d", &marks[i]);
    // }

    // for (int i = 0; i < 4; i++)
    // {
    // printf("The percentage of the Student %d is :- %d \n", i+1 , marks[i]);
    // }

    // This is the 2D Array

    int marks[2][4] = {{23, 45, 86, 47},
                      {66, 88, 66, 88}};
    // this is called Declaration With initialization And it is necessary to write the value of ([2][4]).in the 2D Array

    // here [2] this is for the row
    // and [4] is for the column

    for (int i = 0; i < 2; i++) // this loot will run for the column 0,1
    {
        for (int j = 0; j < 4; j++) // this loop will run for the row 0,1
        {
           
            // printf("The marks of %d,%d is the %d \n", i, j, marks[i][j]);
            //Printing as a matrix
            printf(" %d", marks[i][j]);
        }
        printf("\n");//After one line i want to print antother line in the another line
    }
    // finally this will print like this 00,01,02,03 and 10, 11, 12,13
    return 0;
}