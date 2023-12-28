/*  
Write a C program to print the given number pattern using loop. 
How to print the given number pattern of m rows and n columns using for loop in C programming. 
    Logic to print the given number pattern using for loop in C program.

Input rows: 5
Input columns: 5 

12345
22345
33345
44445
55555
*/


#include <stdio.h>

int main()
{
    int rows, columns,i , j;
    printf("Row: ");
    scanf("%d", &rows);
    printf("column: ");
    scanf("%d",&columns);
    
   for(i=1; i<=rows; i++)
    {
        for(j=1; j<=i-1; j++)
         {
            printf("%d ",i);
        }

       for(j=i; j<=columns; j++)
       {
        printf("%d ",j);
       }
   
   printf("\n");
        
    }

  return 0;          
}
    
