/*
Write a C program to print the given number pattern series of 1’s and 0’s at alternate columns using loop.
How to print number pattern with one’s at even column and zero’s at odd column using for loop in C programming.
Logic to print given number pattern of 1 and 0 at alternate columns.

Input rows: 5
Input columns: 5

01010
01010
01010
01010
01010

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
            if(j%2 == 0)
                printf("0");
            else
            {
                printf("1");
            }    
        }
        printf("\n");
        
    }


    return 0;
}