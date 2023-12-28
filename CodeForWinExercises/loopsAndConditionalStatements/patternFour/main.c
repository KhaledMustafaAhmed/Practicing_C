/*
Write a C program to print the given box number pattern with 1’s and 0’s using loop.
How to print box number pattern using one’s and zero’s using for loop in C programming.
Logic to print box number pattern with 1’s as border and 0’s at center in C program.

Input rows: 5
Input columns: 5

11111
10001
10001
10001
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
            if(i == 0 || i == row-1 || j  == 0 || j == column-1) 
                printf("1");
            else
            {
                printf("0");
            }    
        }
        printf("\n");
        
    }


    return 0;
}