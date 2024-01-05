/* 
Write a C program to input elements in array and count negative elements in array. 
C program to find all negative elements in array. How to count negative elements in array using loop in C programming. 
Logic to count total negative elements in an array in C program.

Input array elements : 10, -2, 5, -20, 1, 50, 60, -50, -12, -9
 
Output: 
Total number of negative elements: 5

*/

#include <stdio.h>
#include <limits.h>
#define ARRAY_SIZE    10
int main(void)
{
   int array[ARRAY_SIZE];
   int index, negative = 0;
   printf("Input array");
   for(index = 0; index < ARRAY_SIZE; index++)
   {
        scanf("%d,", &array[index]);
   }
  for(index = 0; index < ARRAY_SIZE; index++)
  {
    if( array[index] < 0 )
    negative++;
  }

  printf("Total number of negative elements: %d", negative);
    return 0;
}