/*  
Write a C program to print the given number pattern using for loop.
How to print the given number pattern using for loop in C programming. Logic to print the given number pattern using loop 
in C program.

Input rows: 5
Input columns: 5 

11111
22222
33333
44444
55555

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
            printf("%d ",i);
        }
        printf("\n");
    }

  return 0;          
}
    
