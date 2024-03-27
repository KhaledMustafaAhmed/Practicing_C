/*
9. Write a program in C to find the maximum and minimum elements in an array.
Test Data :
Input the number of elements to be stored in the array :3
Input 3 elements in the array :
element - 0 : 45
element - 1 : 25
element - 2 : 21
Expected Output :
Maximum element is : 45
Minimum element is : 21
*/

#include <stdio.h>
#define SIZE  5
#define MAX   10

int main(void)
{   
    int array[SIZE];
    int n, i,j, max, min;
    printf("Input the number of elements to store in the array :");
    scanf("%d", &n);
    printf("Input %d number of elements in the array1 :\n", n);
    for(i=0 ; i<n ; i++)
    {
        printf("element - %d : ", i);
        scanf("%d", &array[i]);
        
    }
    max = array[0];
    min = array[0];
    for(i=0; i<n; i++)
    {
        for(j=i+1 ;j<n; j++)
        {
            if(array[j] > max)
                max = array[j];

            if(array[j] < min)    
                min = array[j];
        }
    }
    printf("Maximum element is : %d\n", max);
    printf("Minimum element is : %d\n", min); 
    return 0;
}