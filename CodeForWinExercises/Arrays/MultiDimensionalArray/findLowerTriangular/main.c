/*   
Write a C program to read elements in a matrix and check whether the matrix is a lower triangular matrix or not. 
C program to find whether the matrix is lower triangular or not. 
Logic to find lower triangular matrix in C programming.

Input elements in matrix:
1 0 0
4 5 0
7 8 9

Matrix is lower triangular





*/

#include <stdio.h>
#define size    3
int main(void) {
    int arrOne [ 3][3];
    int i, j, lower = 0;
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
            if(j>i && *(*(arrOne + i) + j) !=0)
            {
                lower = 1;
                break;
            }
        }
        if(lower)
        {
            break;
        }
    }
    if(lower)
    {
        printf("Not lower");
    }
    else
    {
        printf("lower");
    }
    
    return 0;
}