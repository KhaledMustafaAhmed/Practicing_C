/* 
Write a C program to input elements in array and find reverse of array. 
How to find reverse of array in C programming.
Logic to find reverse of array in C program.

Input array elements: 10, 5, 16, 35, 500


 
Output: 
Array elements after reverse: 500, 35, 16, 5, 10





*/

#include <stdio.h>
#include <limits.h>
#define SIZE   5
int main(void)
{
  int array[SIZE];
  int index; 
  printf("input array elements");
  for(index = 0; index < SIZE; index++)
  {
     scanf("%d,", &array[index]);
  }
     printf("Array elements after reverse: ");
     for(index = 1; index <= SIZE; index++)
     {
          printf("%d ", array[SIZE-index]);
     }
  
   
    return 0;
}