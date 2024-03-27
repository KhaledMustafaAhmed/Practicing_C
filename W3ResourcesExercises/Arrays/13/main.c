/*
13. Write a program in C to insert the values in the array (sorted list).
Test Data :
Insert New value in the sorted array :
-----------------------------------------
Input the size of array : 5
Input 5 elements in the array in ascending order:
element - 0 : 2
element - 1 : 5
element - 2 : 7
element - 3 : 9
element - 4 : 11
Input the value to be inserted : 8
The exist array list is :
2 5 7 9 11
After Insert the list is :
2 5 7 8 9 11
*/

#include <stdio.h>
#define SIZE  10
#define MAX   10

int main(void)
{   
    int array[SIZE];
    int n, i,j, value, index;
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
    printf("The exist array list is : ");
    for(i=0 ; i<n; i++)
    {
        printf("%d ", array[i]);
    }

    for(i=0 ; i<n ; i++)
    {
        if(array[i] > value)
         {
            index = i;
            break;
         }   
    }
    for(i=n ; i>index ; i--)
    {
        array[i] = array[i-1];
    }
    array[index] = value;
    printf("After Insert the list is : ");
    for(i=0 ; i<n+1; i++)
    {
        printf("%d ", array[i]);
    }
    return 0;
}