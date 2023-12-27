/*  
Write a C program to print the given box number pattern of 1 with 0 center using loop.
How to print box number pattern of 1’s with 0 as center using for loop in C programming. 
Logic to print box number pattern with different center using for loop in C program

Input rows: 5
Input columns: 5 

11111
11111
11011
11111
11111
*/

/**
 * C program to print box number pattern of 1's with 0 as center
 */

#include <stdio.h>

int main()
{
    int rows, column, centerRow, centerColumn, i , j ;
    printf("Row: ");
    scanf("%d", &rows);
    printf("column: ");
    scanf("%d",&column);
    centerRow = (rows + 1) / 2 ;
    centerColumn = (column + 1) / 2 ;
    for(i=1; i<=rows; i++) 
    {
        for(j= 1; j<=column; j++)
        {
            if(centerRow == i && centerColumn == j)
            {
                printf("0");
            }
            else if(column % 2 == 0 && centerColumn + 1 == j)
            {
                if( rows%2 == 0 || centerRow == i )
                    {
                        printf("0");
                    }
                else
                   {
                     printf("1");
                   }

            }
            else if(rows % 2 ==0 && centerRow + 1 == i)
            {
                if(centerColumn == j || column%2 == 0)
                {
                        printf("0");
                }
                else
                {
                    printf("1");
                }
                 
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