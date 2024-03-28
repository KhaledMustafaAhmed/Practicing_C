/*
26. Write a program in C to find the two repeating elements in a given array.
Expected Output :
The given array is : 2 7 4 7 8 3 4
The repeating elements are: 7 4
*/

#include <stdio.h>
#define SIZE  50
#define MAX   100
int isExit(int *arr, int arr_size, int n, int index)
{
    int i, flag = 0;
    for(i = index; i < arr_size; i++)
    {
        if(arr[i] == n && i != index)
        {
            flag = 1; 
            break;
        }
    }
    return flag ? 1 : 0;
}
int main(void)
{   
   int arr[7] = {2,7,4,7,8,3,4};
   int i;
   printf("The repeating elements are: ");
   for(i=0; i<7; i++)
   {
    if(isExit(arr, 7, arr[i], i))
    {
        printf("%d ", arr[i]);
    }
   }

    
    return 0;
}