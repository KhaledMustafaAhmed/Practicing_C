/*
14. Write a program in C to insert values in the array (unsorted list).
Test Data :
Input the size of array : 4
Input 4 elements in the array in ascending order:
element - 0 : 1
element - 1 : 8
element - 2 : 7
element - 3 : 10
Input the value to be inserted : 5
Input the Position, where the value to be inserted :2
Expected Output :
The current list of the array :
1 8 7 10
After Insert the element the new list is :
1 5 8 7 10
*/

#include <stdio.h>
#define SIZE  10
#define MAX   10

int main(void)
{   
    int array[SIZE];
    int n, i,j, value, position;
    printf("Input the number of elements to store in the array :");
    scanf("%d", &n);
    printf("Input %d number of elements in the array1 :\n", n);
    for(i=0 ; i<n ; i++)
    {
        printf("element - %d : ", i);
        scanf("%d", &array[i]);
    }
    printf("Input the value to be inserted : ");
    scanf("%d", &value);
    printf("Input the Position, where the value to be inserted : ");
    scanf("%d", &position);
    printf("The current list of the array : \n");
    for(i=0 ; i<n ; i++)
    {
        printf("%d ", array[i]);
    }
    for(i=n; i > position-1 ; i--)
    {
        array[i] = array[i-1];
    }
    array[position-1] = value;
    printf("After Insert the element the new list is : \n");
    for(i=0 ; i<n+1 ; i++)
    {
        printf("%d ", array[i]);
    }
    return 0;
}