/*
Write a C program to print the given number pattern of 1’s and 0’s at alternate rows using loop.
How to print square number pattern of one and zero with one at odd row and zero at even row using loop in C programming.
Logic to print number pattern of 1 and 0 with alternate rows.

Input rows: 5
Input columns: 5

11111
00000
11111
00000
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
            if(i%2 == 0)
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