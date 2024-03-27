/*
1. Write a program in C to store elements in an array and print them.
Test Data :
Input 10 elements in the array :
element - 0 : 1
element - 1 : 1
element - 2 : 2
.......
Expected Output :
Elements in array are: 1 1 2 3 4 5 6 7 8 9
*/

#include <stdio.h>
#define ARRAY_SIZE  10
int main(void)
{   
    int array[ARRAY_SIZE];
    int i;
    printf("Input 10 elements in the array :");
    for(i=0; i<ARRAY_SIZE; i++)
    {
        printf("element - %d : ", i);
        scanf("%d", &array[i]);
    }
    printf("Elements in array are: ");
    for(i=0; i<ARRAY_SIZE; i++)
    {
        printf("%d", array[i]);
    }
    return 0;
}