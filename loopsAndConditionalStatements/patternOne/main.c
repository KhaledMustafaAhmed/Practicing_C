/*
Write a C program to print the given 0, 1 square number pattern using loop.
C program to print binary number pattern of n rows and m columns using loop. How to print the square number patterns
using for loop in C programming. Logic to print the square filled with 1 using for loop in C program.

Input rows: 5
Input columns: 5

11111
11111
11111
11111
11111
*/

#include  <stdio.h>
int main(void)
{
    int row, column,i,j;
    printf("Row: ");
    scanf("%d", &row);
    printf("column: ");
    scanf("%d",&column);
    for(i = 0; i < row; i++)
    {
        for ( j = 0; j < column; j++)
        {
            printf("1");
        }
        printf("\n");
        
    }


    return 0;
}