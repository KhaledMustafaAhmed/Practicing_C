/*
12. Write a program in C to sort the elements of the array in descending order.
Test Data :
Input the size of array : 3
Input 3 elements in the array :
element - 0 : 5
element - 1 : 9
element - 2 : 1
Expected Output :
Elements of the array in sorted descending order:
9 5 1
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
            if(array[j] < array[j+1])
            {
                temp = array[j+1];
                array[j+1] = array[j] ;
                array[j]= temp;
            }
        }
    }
    printf("Elements of array in sorted descending order:\n");
    for(i=0 ;i<n; i++)
    {
        printf("%d ", array[i]);
    }
    return 0;
}