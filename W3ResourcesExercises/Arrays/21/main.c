/*
21. Write a program in C to find the largest sum of contiguous subarrays in an array.
Expected Output :
The given array is : 8 3 8 -5 4 3 -4 3 5
The largest sum of contiguous subarray is : 25
*/

#include <stdio.h>
#define SIZE  9
#define MAX   10

int main(void)
{   
    int array[SIZE];
    int maxSum =0, Sum=0, i,j,k;
    printf("The given array is : ");
    for(i=0; i<SIZE; i++)
    {
        scanf("%d", &array[i]);
    }
    for(i=0; i<SIZE; i++)
    {
        for(j=i; j<SIZE; j++)
        {
            Sum = 0;
            for(k=i; k<=j; k++)
            {
                Sum = Sum + array[k];
            }
            if(Sum>maxSum)
                maxSum = Sum;
        }
    }
    printf("The largest sum of contiguous subarray is : %d", maxSum);
    
    return 0;
}