/*  
Write a C program to print the given number pattern using loop. 
How to print the given number pattern of m rows and n columns using for loop in C programming. 
Logic to print the given number pattern using for loop in C program.

Input 5

54321
43212
32123
21234
12345
*/


#include <stdio.h>

int main()
{
    int rows, columns,numberPattern;
    printf("numberPattern: ");
    scanf("%d", &numberPattern);
    for(rows=1; rows<=numberPattern; rows++)
    {
        for(columns=numberPattern-rows+1; columns>1; columns--)
        {
            printf("%d ",columns);
        }
        for(columns=1;columns<=rows; columns++)
        {
            printf("%d ",columns);
        }
        printf("\n");

    }
  return 0;          
}
    
