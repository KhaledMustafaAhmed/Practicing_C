/*
22. Write a program in C to find the missing number in a given array. There are no duplicates in the list.
Expected Output :
The given array is : 1 3 4 2 5 6 9 8
The missing number is : 7
*/

#include <stdio.h>
#define SIZE  8
#define MAX   10

int main(void)
{   
    int array[SIZE];
    int sum = 0, i,j;
    printf("The given array is : ");
    for(i=0; i<SIZE; i++)
    {
        scanf("%d", &array[i]);
    }
    for(i=0; i<SIZE; i++)
    {
        sum += array[i];
    }
    printf("The missing number is : %d", (((SIZE+1)*(SIZE +2))/2) - sum );
    
    return 0;
}