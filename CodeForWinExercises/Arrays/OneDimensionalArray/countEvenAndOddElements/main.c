/* 
Write a C program to input elements in array from user and count even and odd elements in array. 
How to find total number of even and odd elements in a given array using C programming. 
Logic to count even and odd elements in array using loops.

Input array: 1 2 3 4 5 6 7 8 9
 
Output: 
Total even elements: 4
Total odd elements: 5
*/

#include <stdio.h>
#include <limits.h>
#define ARRAY_SIZE    9
int main(void)
{
   int array[ARRAY_SIZE];
   int index, even = 0, odd = 0;
   printf("Input array");
   for(index = 0; index < ARRAY_SIZE; index++)
   {
        scanf("%d", &array[index]);
   }
  for(index = 0; index < ARRAY_SIZE; index++)
  {
    if(array[index] %2 == 0)
    {
        even ++;
    }
    else{
        odd ++;
    }
  }
    printf("total even: %d\n total odd: %d", even,odd);
    return 0;
}