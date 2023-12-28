/*  
Write a C program to print the given circle number pattern with 1’s and 0’s.
How to print circle number pattern of one’s and zero’s using for loop in C programming. 
Logic to print the box number pattern with 1 as border and 0 in center and corners.

Input rows: 5
Input columns: 5 

01110
10001
10001
10001
01110

*/

#include <stdio.h>

int main()
{
    int rows, columns,i , j ;
    printf("Row: ");
    scanf("%d", &rows);
    printf("column: ");
    scanf("%d",&columns);
    
   for(i=1; i<=rows; i++)
    {
        for(j=1; j<=columns; j++)
        {
            if((i == 1 || i == rows) && (j == 1 || j == columns ))
            {
                    printf("0");
              
            }
            else if(j == columns || j == 1 || i == rows || i == 1)
            {
                printf("1");
            }
            else
            {
              
                printf("0");
            }
        }
        printf("\n");
    }

  return 0;          
}
    
