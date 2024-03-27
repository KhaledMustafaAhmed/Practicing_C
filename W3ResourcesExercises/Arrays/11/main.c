/*
11. Write a program in C to sort elements of an array in ascending order.
Test Data :
Input the size of array : 5
Input 5 elements in the array :
element - 0 : 2
element - 1 : 7
element - 2 : 4
element - 3 : 5
element - 4 : 9
Expected Output :
Elements of array in sorted ascending order:
2 4 5 7 9
*/

#include <stdio.h>
#define SIZE  10
#define MAX   10

int main(void)
{   
    int array[SIZE];
    int n, i,j, temp;
    printf("Input the number of elements to store in the array :");
    scanf("%d", &n);
    printf("Input %d number of elements in the array1 :\n", n);
    for(i=0 ; i<n ; i++)
    {
        printf("element - %d : ", i);
        scanf("%d", &array[i]);
        
    }
    for(i=0 ; i<n ; i++)
    {
        for(j=0 ; j<n-1 ; j++)
        {
            if(array[j] > array[j+1])
            {
                temp = array[j+1];
                array[j+1] = array[j] ;
                array[j]= temp;
            }
        }
    }
    printf("Elements of array in sorted ascending order:\n");
    for(i=0 ;i<n; i++)
    {
        printf("%d ", array[i]);
    }
    return 0;
}