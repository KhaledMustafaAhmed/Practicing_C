/*   
Write a C program to read elements in a matrix and check whether the matrix is upper triangular matrix or not.
C program to check upper triangular matrix. 
Logic to find upper triangular matrix in C programming.

Input elements of matrix:
1 2 3
0 5 6
0 0 9

Matrix is upper triangular




*/

#include <stdio.h>
#define size    3
int main(void) {
    int arrOne [ 3][3];
    int i, j, upper = 0;
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
            if(j<i && *(*(arrOne + i) + j) !=0)
            {
                upper = 1;
                break;
            }
        }
        if(upper)
        {
            break;
        }
    }
    if(upper)
    {
        printf("Not upper");
    }
    else
    {
        printf("upper");
    }
    
    return 0;
}