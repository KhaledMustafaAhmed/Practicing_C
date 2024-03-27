/*
4. Write a program in C to copy the elements of one array into another array.
Test Data :
Input the number of elements to be stored in the array :3
Input 3 elements in the array :
element - 0 : 15
element - 1 : 10
element - 2 : 12
Expected Output :
The elements stored in the first array are :
15 10 12
The elements copied into the second array are :
15 10 12
*/

#include <stdio.h>
#define SIZE  5
int main(void)
{   
    int array[SIZE], copy[SIZE];
    int n, i;
    printf("Input the number of elements to store in the array :");
    scanf("%d", &n);
    printf("Input %d number of elements in the array :\n", n);
    for(i=0 ; i<n ; i++)
    {
        printf("element - %d : ", i);
        scanf("%d", &array[i]);
        copy[i] = array[i];
    }
    
    printf("The elements stored in the first array are :\n");
    for(i=0 ; i<n ; i++)
    {
        printf("%d\n",array[i]);
    }
    printf("The elements stored in the second array are :\n");
    for(i=0 ; i<n ; i++)
    {
        printf("%d\n",copy[i]);
    }
    return 0;
}