/* 
Write a C program to input elements in array and copy all elements of first array into second array. 
How to copy array elements to another array in C programming. 
Logic to copy array elements in C program using loop.

Input array1 elements: 10 1 95 30 45 12 60 89 40 -4
 
Output: 
Array1: 10 1 95 30 45 12 60 89 40 -4
Array2: 10 1 95 30 45 12 60 89 40 -4

*/

#include <stdio.h>
#include <limits.h>
#define ARRAY_SIZE    10
int main(void)
{
   int arrayOne[ARRAY_SIZE],arrayTwo[ARRAY_SIZE];
   int index, negative = 0;
   printf("Input array");
   for(index = 0; index < ARRAY_SIZE; index++)
   {
        scanf("%d", &arrayOne[index]);
   }
   for(index = 0; index < ARRAY_SIZE; index++)
   {
    arrayTwo[index] = arrayOne[index];
   }
   printf(" array 1: ");
   for(index = 0; index < ARRAY_SIZE; index++)
   {
        printf("%d ", arrayOne[index]);
   }
   printf(" \narray 2: ");
   for(index = 0; index < ARRAY_SIZE; index++)
   {
        printf("%d ", arrayTwo[index]);
   }
  
    return 0;
}