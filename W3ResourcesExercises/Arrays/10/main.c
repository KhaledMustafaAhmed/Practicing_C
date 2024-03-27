/*
10. Write a program in C to separate odd and even integers into separate arrays.
Test Data :
Input the number of elements to be stored in the array :5
Input 5 elements in the array :
element - 0 : 25
element - 1 : 47
element - 2 : 42
element - 3 : 56
element - 4 : 32
Expected Output :
The Even elements are :
42 56 32
The Odd elements are :
25 47
*/

#include <stdio.h>
#define SIZE  5
#define MAX   10

int main(void)
{   
    int array[SIZE],odds[SIZE],evens[SIZE];
    int n, i,j, odd =0 , even = 0;
    printf("Input the number of elements to store in the array :");
    scanf("%d", &n);
    printf("Input %d number of elements in the array1 :\n", n);
    for(i=0 ; i<n ; i++)
    {
        printf("element - %d : ", i);
        scanf("%d", &array[i]);
        
    }
    for(i=0 ;i<n ;i++)
    {
        if(array[i] %2 == 0)
            evens[even++] = array[i];
        else    
            odds[odd++] = array[i];    
    } 
    printf("The Even elements are : \n");
    for(i = 0; i<even; i++)
    {
        printf("%d ", evens[i]);
    }
    printf("\nThe odd elements are : \n");
    for(i = 0; i<odd; i++)
    {
        printf("%d ", odds[i]);
    }
    return 0;
}