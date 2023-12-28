/* 
Write a C program to input a number from user and find all factors of the given number using for loop. 
How to find factors of a number in C program.
Logic to find all factors of a given number in C programming.

input: Input number: 12

output: Factors of 12: 1, 2, 3, 4, 6, 12
*/
#include <stdio.h>
int main(void)
{   
   int number,i;
   printf("Number: ");
   scanf("%d",&number);
   printf("Factors of %d: = ", number);
   for(i=1;i<=number;i++)
   {
    if( number%i == 0)
        printf("%d ",i);
   }

    return 0;
}