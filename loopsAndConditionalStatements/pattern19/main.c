/*  
Write a C program to print the given number pattern using loop. 
How to print the given number pattern of m rows and n columns using for loop in C programming. 
Logic to print the given number pattern using for loop in C program.

Input 5

12345
21234
32123
43212
54321
*/


#include <stdio.h>

int main()
{
    int rows, columns,numberPattern;
    printf("numberPattern: ");
    scanf("%d", &numberPattern);
    for(rows=1; rows<=numberPattern; rows++)
    {
        for(columns=rows; columns>1; columns--)
        {
            printf("%d ",columns);
        }
        for(columns=1;columns<=numberPattern-rows+1; columns++)
        {
            printf("%d ",columns);
        }
        printf("\n");

    }
  return 0;          
}
    
