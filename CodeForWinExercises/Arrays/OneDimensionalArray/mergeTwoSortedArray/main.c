/* 
Write a C program to input elements in two array and merge two array to third array.
 How to merge two array in C programming. 
 Logic to merge two sorted array to third array in C program.

Input first array elements: 1, 4, 6, 9, 15
Input second array elements: 2, 5, 8, 10

 
Output: 
Merged array in ascending order = 1, 2, 4, 5, 6, 8, 9, 10, 15




*/

#include <stdio.h>
#include <limits.h>
#define MAX_SIZE    100
int main(void)
{
   int arrayOne[MAX_SIZE], arrayTwo[MAX_SIZE], merge[MAX_SIZE * 2];
   int indexOne, indexTwo,sizeOne,sizeTwo ,mergeSize,mergeIndex;
   printf("Input size of arrayOne");
   scanf("%d", &sizeOne);
    printf("Input size of arrayTwo");
   scanf("%d", &sizeTwo);
   printf("Input arrayOne");
   for(indexOne = 0; indexOne < sizeOne; indexOne++)
   {
        scanf("%d,", &arrayOne[indexOne]);
   }
    printf("Input arrayTwo");
   for(indexTwo = 0; indexTwo < sizeTwo; indexTwo++)
   {
        scanf("%d,", &arrayTwo[indexTwo]);
   }
   mergeSize = sizeTwo + sizeOne;
   indexOne = 0; 
   indexTwo = 0;
   for(mergeIndex = 0; mergeIndex < mergeSize; mergeIndex++)
   {
    if(indexOne >= sizeOne ||indexTwo >= sizeTwo)
    {
        break;
    }

    if(arrayOne[indexOne] > arrayTwo[indexTwo])
    {
        merge[mergeIndex] = arrayTwo[indexTwo];
        indexTwo++;
    }
    else if (arrayOne[indexOne] < arrayTwo[indexTwo])
    {
        merge[mergeIndex] = arrayOne[indexOne];
        indexOne++;
    }
    else
    {
         merge[mergeIndex] = arrayOne[indexOne];
         indexOne++;
         indexTwo++;

    }
   }
   while(indexOne < sizeOne)
   {
    merge[mergeIndex] = arrayOne[indexOne];
    indexOne++;
    mergeIndex++;
   }
   while(indexTwo < sizeTwo)
   {
     merge[mergeIndex] = arrayOne[indexTwo];
    indexTwo++;
    mergeIndex++;
   }

   for(mergeIndex = 0; mergeIndex < mergeSize; mergeIndex++)
   {
    printf("%d ", merge[mergeIndex]);
   }


   
    return 0;
}