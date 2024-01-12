/*   
Write a C program to read elements in a matrix and find the sum of minor diagonal (opposite diagonal) elements. 
C program to calculate sum of minor diagonal elements.
Logic to find sum of opposite diagonal elements of a matrix in C programming.

Input array elements: 
1 2 3
4 5 6
7 8 9

Sum of minor diagonal elements = 15



*/

#include <stdio.h>
#define size    3
int main(void) {
    int arrOne [ 3][3];
    int i, j, sum = 0;
    printf("input 3x3 array \n"); 
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < size; j++)
        {
            scanf("%d", (*(arrOne + i)) + j);
            
        }
        printf("\n");
    }
    for(i = 0; i < size; i++)
    {
      
            sum +=  *(*(arrOne + i) + (size - i - 1)) ;
           
       
        
    }
    printf("%d", sum);
    
    return 0;
}