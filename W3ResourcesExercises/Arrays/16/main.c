/*
16. Write a program in C to find the second largest element in an array.
Test Data :
Input the size of array : 5
Input 5 elements in the array :
element - 0 : 2
element - 1 : 9
element - 2 : 1
element - 3 : 4
element - 4 : 6
Expected Output :
The Second largest element in the array is : 6
*/

#include <stdio.h>
#define SIZE  10
#define MAX   10

int main(void)
{   
    int array[SIZE];
    int n, i,j, max, secondMax;
    printf("Input the number of elements to store in the array :");
    scanf("%d", &n);
    printf("Input %d number of elements in the array1 :\n", n);
    for(i=0 ; i<n ; i++)
    {
        printf("element - %d : ", i);
        scanf("%d", &array[i]);
    }
    max = array[0];
    for(i=0; i<n; i++)
    {
        if(array[i] > max)
            max = array[i];
    }
    secondMax = array[0];
    for(i=0; i<n; i++)
    {
        if(array[i] > secondMax && array[i] < max)
            secondMax = array[i];
    }
    printf("The Second largest element in the array is : %d", secondMax);
    

   
    return 0;
}