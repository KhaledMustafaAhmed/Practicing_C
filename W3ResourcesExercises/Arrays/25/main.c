/*
25. Write a program in C to find the smallest missing element in a sorted array.
Expected Output :
The given array is : 0 1 3 4 5 6 7 9
The missing smallest element is: 2
*/

#include <stdio.h>
#define SIZE  50
#define MAX   100
int missing_element(int *arr, int small, int higher)
{
    if(small > higher)
        return small;

    int middle = small + (higher - small)/2;
    if(arr[middle] == middle) 
        return missing_element(arr, middle+1, higher);    
     else 
        return missing_element(arr, small, middle-1);       
}
int main(void)
{   
   int arr[10] = {0,1,3,4,5,6,7,9};
   int i;
    printf("small is: %d", missing_element(arr, 0, 7));
    
    return 0;
}