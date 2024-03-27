/*
17. Write a program in C to find the second smallest element in an array.
Test Data :
Input the size of array : 5
Input 5 elements in the array (value must be <9999) :
element - 0 : 0
element - 1 : 9
element - 2 : 4
element - 3 : 6
element - 4 : 5
Expected Output :
The Second smallest element in the array is : 4
*/

#include <stdio.h>
#define SIZE  10
#define MAX   10

int main(void)
{   
    int array[SIZE];
    int n, i,j, small, secondsmall;
    printf("Input the number of elements to store in the array :");
    scanf("%d", &n);
    printf("Input %d number of elements in the array1 :\n", n);
    for(i=0 ; i<n ; i++)
    {
        printf("element - %d : ", i);
        scanf("%d", &array[i]);
    }
    small = array[0];
    for(i=0; i<n; i++)
    {
        if(array[i] < small)
            small = array[i];
    }
    secondsmall = 2147483647;
    for(i=0; i<n; i++)
    {
        if(array[i] < secondsmall && array[i] > small)
            secondsmall = array[i];
    }
    printf("The Second largest element in the array is : %d", secondsmall);
    

   
    return 0;
}