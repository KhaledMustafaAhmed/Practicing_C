/* 
Write a C program to delete duplicate elements from array. How to remove duplicate elements from array in C programming. 
After performing delete operation the array should only contain unique integer value. 
Logic to delete duplicate elements from array.

Input array elements: 10, 20, 10, 1, 100, 10, 2, 1, 5, 10


 
Output: 
After removing all duplicate elements
Elements of array are: 10, 20, 1, 100, 2, 5


*/

#include <stdio.h>
#include <limits.h>
#define MAX_SIZE    100
int main(void)
{
   int array[MAX_SIZE];
   int index,size,j,k,count = 0;
   printf("Input size of array");
   scanf("%d", &size);
   printf("Input array");
   for(index = 0; index < size; index++)
   {
        scanf("%d,", &array[index]);
   }
   
   for(index = 0; index < size; index++)
   {
    for(j = index + 1; j<size; j++)
   {
         if(array[index] == array[j])
            {
                 for(k = j; k<size-1 ; k++)
                    {
                        array[k] = array[k+1];
                     }
                size--;
                 j--;
            }
   }
   }
   for(index = 0; index < size; index++)
   {
    printf("%d ", array[index]);
   }
   
   
    return 0;
}