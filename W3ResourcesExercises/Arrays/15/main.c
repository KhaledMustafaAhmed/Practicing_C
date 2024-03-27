/*
15. Write a program in C to delete an element at a desired position from an array.
Test Data :
Input the size of array : 5
Input 5 elements in the array in ascending order:
element - 0 : 1
element - 1 : 2
element - 2 : 3
element - 3 : 4
element - 4 : 5
Input the position where to delete: 3
Expected Output :
The new list is : 1 2 4 5
*/

#include <stdio.h>
#define SIZE  10
#define MAX   10

int main(void)
{   
    int array[SIZE];
    int n, i,j, position;
    printf("Input the number of elements to store in the array :");
    scanf("%d", &n);
    printf("Input %d number of elements in the array1 :\n", n);
    for(i=0 ; i<n ; i++)
    {
        printf("element - %d : ", i);
        scanf("%d", &array[i]);
    }
    printf("Input the position where to delete: ");
    scanf("%d", &position);
    for(i=position-1 ; i<n-1 ; i++)
    {
        array[i] = array[i+1];
    }
    printf("The new list is : ");
    for(i=0 ; i<n-1 ; i++)
    {
        printf("%d ", array[i]);
    }
        
    

   
    return 0;
}