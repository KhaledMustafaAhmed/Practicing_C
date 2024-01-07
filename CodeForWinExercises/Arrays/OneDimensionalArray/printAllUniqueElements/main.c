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
   int freq[MAX_SIZE] ;
   int index,size,j,count = 0;
   printf("Input size of array");
   scanf("%d", &size);
   printf("Input array");
   for(index = 0; index < size; index++)
   {
        scanf("%d,", &array[index]);
        freq[index] = -1;
   }
   for(index = 0; index < size; index++)
   {
    count = 1;
    for(j = index+1; j < size; j++)
    {
        if(array[j] == array[index])
        {
            count++;   
            freq[j] = 0;
        }
    }
    if(freq[index] != 0)
        freq[index] = count;
    
        
   }
    printf("All unique elements in the array are:");
   for(index = 0; index < size; index++)
   {
    if(freq[index] == 1)
    {
        printf("%d ", array[index]);
    }
   }
   
    return 0;
}