/* 
Write a C program to insert element in array at specified position. 
C program to insert element in array at given position. 
The program should also print an error message if the insert position is invalid. 
Logic to insert an element in array at given position in C program.

Input array elements: 10, 20, 30, 40, 50
Input element to insert: 25
Input position where to insert: 3
 
Output: 
Elements of array are: 10, 20, 25, 30, 40, 50

*/

#include <stdio.h>
#include <limits.h>
#define MAX_SIZE    50
int main(void)
{
   int array[MAX_SIZE];
   int index,position,element,size;
   printf("input Size of array less than MAX_SIZE: ");
   scanf("%d",&size);
   printf("Input array");
   for(index = 0; index < size; index++)
   {
        scanf("%d", &array[index]);
   }
   printf("Input Element: ");
   scanf("%d", &element);
   printf("Input position: ");
   scanf("%d", &position);
  if(position >=MAX_SIZE) 
  {
    printf("invalid position");
  }
  else
  {
    for(index = size; index >= position; index--)
    {
        array[index] = array[index-1];
    }
    array[position-1] = element;
    size++;
    printf("Array elements after Insertion: ");
    for(index = 0; index < size; index++)
    {
        printf("%d ", array[index]);
    }
  }
  
    return 0;
}