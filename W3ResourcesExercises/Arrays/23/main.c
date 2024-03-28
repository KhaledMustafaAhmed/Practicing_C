/*
23. Write a program in C to find the pivot element of a sorted and rotated array using binary search.
Pivot element is the only element in input array which is smaller than it's previous element.
A pivot element divided a sorted rotated array into two monotonically increasing array.
Expected Output :
The given array is : 14 23 7 9 3 6 18 22 16 36
The Pivot Element in the array is : 3
*/

#include <stdio.h>
#define SIZE  8
#define MAX   10

int main(void)
{   
    int array[SIZE];
    int sum = 0, i,j;
    printf("The given array is : ");
    for(i=0; i<SIZE; i++)
    {
        scanf("%d", &array[i]);
    }
    for(i=0; i<SIZE; i++)
    {
        sum += array[i];
    }
    printf("The missing number is : %d", (((SIZE+1)*(SIZE +2))/2) - sum );
    
    return 0;
}