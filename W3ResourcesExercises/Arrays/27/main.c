/*
27. Write a program in C to find two elements whose sum is closest to zero.
Expected Output :
The given array is : 38 44 63 -51 -35 19 84 -69 4 -46
The Pair of elements whose sum is minimum are:
[44, -46]
*/

#include <stdio.h>
#include <math.h>
#define SIZE  50
#define MAX   100
void findMinPair(int *arr, int arr_Size)
{
    int i,j,sum,minSum,minPair1,minPair2;
    minPair1 = arr[0];
    minPair2 = arr[1];
    minSum = minPair1 + minPair2;
    for(i=0;i<arr_Size;i++)
    {
        for(j=i+1;j<arr_Size;j++)
        {
            sum = arr[j] + arr[i];
            if(abs(sum) < abs(minSum))
            {
                minSum = sum;
                minPair1 = arr[i];
                minPair2 = arr[j];
            }
        }
    }
    printf("%d %d", minPair1, minPair2);
}
int main(void)
{   
   int arr[10] = {38,44,63,-51,35,19,84,-69,4,-46};
   findMinPair(arr, 10);
    return 0;
}