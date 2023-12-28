/*  
Write a C program to print the given number pattern using loop. 
How to print the given number pattern of m rows and n columns using for loop in C programming. 
    Logic to print the given number pattern using for loop in C program.

Input rows: 5
Input columns: 5 

first one: 
55555
54444
54333
54322
54321


second one: 
55555
44445
33345
22345
12345
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
        for(j = columns; j>columns-i; j--)
        {
            printf("%d ",j);
        }
        for(j=1; j<=columns-i; j++)
        {
            printf("%d ",(rows-i)+1);
        }
        printf("\n");
        
    }

  return 0;          
}
    
