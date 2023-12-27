/*  
Write a C program to print the given chessboard number pattern of 1’s and 0’s using loop.
How to print chessboard number pattern of n rows and n columns using for loop in C programming.
Logic to print chessboard number pattern of n rows and n columns using for loop in C program.

Input rows: 5
Input columns: 5 

10101
01010
10101
01010
10101
*/

#include <stdio.h>

int main()
{
    int rows, column, i , j, k ;
    printf("Row: ");
    scanf("%d", &rows);
    printf("column: ");
    scanf("%d",&column);
    k = 1;
    for(i=1; i<=rows; i++) 
    {
        for(j= 1; j<=column; j++)
        {
            if(k > 0)
                printf("1");
            else
                printf("0");

                k*=-1;
        }
        if(column %2 == 0)
            k*=-1;

            printf("\n");
    }
  return 0;          
}
    
