/* 
Write a C program to input elements in array and print all unique elements in array. 
How to find unique elements in array in C programming. 
Logic to find unique elements in array in C program.

Input array elements: 1, 2, 3, 5, 1, 5, 20, 2, 12, 10


 
Output: 
All unique elements in the array are: 3, 20, 12, 10


*/

#include <stdio.h>
#include <limits.h>
#define MAX_SIZE    100
int main(void)
{
   int array[MAX_SIZE];
   int freq[MAX_SIZE] = {0};
   int index,size;
   printf("Input size of array");
   scanf("%d", &size);
   printf("Input array");
   for(index = 0; index < size; index++)
   {
        scanf("%d,", &array[index]);
   }
   
    return 0;
}