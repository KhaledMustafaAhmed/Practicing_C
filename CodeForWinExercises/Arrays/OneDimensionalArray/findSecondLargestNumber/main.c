/* 
Write a C program to find largest and second largest element in an array. 
How to find second largest element in array in C programming language. 
Logic to find second largest element in array in C program.

Input array elements: -7 2 3 8 6 6 75 38 3 2
 
Output: Second largest = 38 
*/

#include <stdio.h>
#include <limits.h>
#define ARRAY_SIZE    10
int main(void)
{
   int array[ARRAY_SIZE];
   int index,Max1, Max2;
   Max1 = Max2 = INT_MIN;
   printf("Input array elements: ");
   for(index = 0; index < ARRAY_SIZE; index++)
   {
    scanf("%d", &array[index]);
   }
   
   for(index = 0; index < ARRAY_SIZE; index++)
   {
        if(array[index] > Max1)
            {
                Max2 = Max1;
                Max1 = array[index];
                
            }

            

        if(array[index] > Max2 && array[index] < Max1)
            Max2 = array[index];    
   }

   printf("Second largest: %d", Max2);

    return 0;
}