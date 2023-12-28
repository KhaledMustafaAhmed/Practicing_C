/*  
Write a C program to print the given number pattern using loop. 
How to print the given number pattern of m rows and n columns using loop in C programming. 
Logic to print the given number pattern using for loop in C program.

Input rows: 5
Input columns: 5 

1  2  3  4  5
6  7  8  9 10
11 12 13 14 15
16 17 18 19 20
21 22 23 24 25

*/

#include <stdio.h>

int main()
{
    int rows, columns,i , j , k = 1 ;
    printf("Row: ");
    scanf("%d", &rows);
    printf("column: ");
    scanf("%d",&columns);
    
   for(i=1; i<=rows; i++)
    {
        for(j=1; j<=columns; j++, k++)
        {
            printf("%-3d",k);
        }
        printf("\n");
        
    }

  return 0;          
}
    
