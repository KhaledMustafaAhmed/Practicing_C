/*  
Write a C program to print the given box number pattern of 1’s and 0’s with plus in center of the box using loop.
How to print box number pattern with plus in center using for loop in C programming.
Logic to print box number pattern with plus in center of the box in C program.

Input rows: 5
Input columns: 5 

11011
11011
00000
11011
11011
*/

#include <stdio.h>

int main()
{
    int rows, column,centerRow, centerColumn, i , j ;
    printf("Row: ");
    scanf("%d", &rows);
    printf("column: ");
    scanf("%d",&column);
    centerRow = (rows + 1) / 2;
    centerColumn = (column + 1) / 2;
    for(i = 1; i <= rows; i++)
    {
        for(j = 1; j <= column; j++)
        {
            if(centerColumn == j || centerRow  == i)
            {
                printf("0");
            }
        else if(rows%2 == 0 && centerRow+1 == i)
        {
                printf("0");
        }
        else if(column%2 == 0 && centerColumn+1 == j)
        {
            printf("0");
        }
        else
        {
            printf("1");
        }
        }
        printf("\n");
    }
  return 0;          
}
    
