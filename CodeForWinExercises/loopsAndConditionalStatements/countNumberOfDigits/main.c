/* 
Write a C program to input a number from user and count number of digits in the given integer using loop.
How to find total digits in a given integer using loop in C programming. Logic to count digits in a given integer
without using loop in C program.

input: Input num: 35419


output: Number of digits: 5
*/

#include  <stdio.h>

int main(void)
{
   int number, digits = 0;
   printf("Enter Number: ");
   scanf("%d", &number);
   do
   {
        digits++;
        number /= 10;
   }while(number != 0);
   
   printf("Number of digits: %d", digits);
   
    return 0;
}