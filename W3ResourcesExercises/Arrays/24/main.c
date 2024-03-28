/*
24. Write a program in C to rotate an array by N positions.
Expected Output :
The given array is : 0 3 6 9 12 14 18 20 22 25 27
From 4th position the values of the array are : 12 14 18 20 22 25 27
Before 4th position the values of the array are : 0 3 6 9
After rotating from 4th position the array is:
12 14 18 20 22 25 27 0 3 6 9
*/

#include <stdio.h>
#define SIZE  50
#define MAX   100
void shiftArr(int *arr, int arr_size)
{
    int i;
    int temp = arr[0];
    for(i=0; i<arr_size-1; i++)
    {
        arr[i] = arr[i+1];
    }
    arr[i] = temp;
}
void rotatearray(int *arr, int arr_size, int n)
{
    int i;
    for(i=0; i<n; i++)
    {
        shiftArr(arr,arr_size);
    }

}
int main(void)
{   
   int arr[10] = {0,3,6,9,12,14,18,20,22,25,27};
   int i,n;
   printf("Rotating position ");
   scanf("%d",&n);
   printf("From %dth position the values of the array are :  ",n);
   for(i=n; i<10; i++)
   {
    printf("%d ",arr[i]);
   }
   printf("Before %dth position the values of the array are :  ",n);
   for(i=0; i<n; i++)
   {
    printf("%d ",arr[i]);
   }
   rotatearray(arr, 10, n);
   printf("After rotating from %dth position the array is: ", n);
   for(i=0; i<10; i++)
   {
    printf("%d ",arr[i]);
   }

    

    
    return 0;
}