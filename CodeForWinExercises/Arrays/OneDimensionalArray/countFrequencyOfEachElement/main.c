/* 
Write a C program to input elements in array and find frequency of each element in array. 
How to count occurrence of each element in array in C programming using loop. 
Logic to count frequency of each element in array in C program.

Input array elements: 5, 10, 2, 5, 50, 5, 10, 1, 2, 2

 
Output: 
Frequency of 5 = 3
Frequency of 10 = 2
Frequency of 2 = 3
Frequency of 50 = 1
Frequency of 1 = 1


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
   for(index = 0; index < size; index++)
   {
         freq[array[index]]++;
   }
   for(index = 0; index < MAX_SIZE; index++)
   {
   if(freq[index] !=0)
   {
    printf("freqancy of %d : %d\n", index, freq[index]);
   
   }
   
   }
    return 0;
}