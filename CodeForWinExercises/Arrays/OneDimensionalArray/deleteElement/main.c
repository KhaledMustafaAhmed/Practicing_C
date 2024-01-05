/* 
Write a C program to delete element from array at specified position. 
How to remove element from array at given position in C programming. 
Logic to remove element from any given position in array in C program. 
The program should also print an error message if the delete position is invalid.

Input array elements: 10 20 30 40 50
Input position to delete: 2
 
Output: 
Array elements: 10, 30, 40, 50


*/

#include <stdio.h>
#include <limits.h>
#define MAX_SIZE    50
int main(void)
{
   int array[MAX_SIZE];
   int index,position,size;
   printf("input Size of array less than MAX_SIZE: ");
   scanf("%d",&size);
   printf("Input array");
   for(index = 0; index < size; index++)
   {
        scanf("%d", &array[index]);
   }
   printf("Input position: ");
   scanf("%d", &position);
  if(position >=MAX_SIZE || position <= 0) 
  {
    printf("invalid position");
  }
  else
  {
    for(index = position-1; index < size; index++)
    {
        array[index] = array[index+1];
    }
    
    size--;
    printf("Array elements after Insertion: ");
    for(index = 0; index < size; index++)
    {
        printf("%d ", array[index]);
    }
  }
  
    return 0;
}