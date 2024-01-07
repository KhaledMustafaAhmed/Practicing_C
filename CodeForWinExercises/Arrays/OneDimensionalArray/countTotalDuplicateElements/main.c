/* 
Write a C program to input elements in array from user and count duplicate elements in array. 
C program to find all duplicate elements in an unsorted array. 
How to count duplicate elements in array using loop in C programming.

Input array elements: 1, 10, 20, 1, 25, 1, 10, 30, 25, 1


 
Output: 
Total number of duplicate elements = 5


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
        
        
   }
   for(index = 0; index < size; index++)
   {
    for(j=index+1; j < size; j++)
    {
        if(array[j] == array[index])
        {
            count++;
            break;
        }
    }
   }
   printf("Total number of duplicates in array: %d",count);
   
   
    return 0;
}