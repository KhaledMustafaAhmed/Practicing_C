/*   
Write a C program to read elements in a matrix and find sum of upper triangular matrix. 
How to find sum of upper triangular matrix in C. 
Logic to find sum of upper triangular matrix.

Input elements of matrix:
1 2 3
0 5 6
0 0 9

Sum of upper triangular matrix = 11





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
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < size; j++)
        {
            if(j > i)
            {
                sum += *(*(arrOne + i) + j);
            }
        }
        
    }
    printf("sum of upper triangular matrix: %d", sum);
    
    
    return 0;
}