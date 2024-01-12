/*   
Write a C program to read elements in a matrix and check whether matrix is Sparse matrix or not. 
C program for determining sparse matrix. How to check sparse matrix in C. 
Logic to check sparse matrix in C programming.

Input elements in matrix: 
1 5 3
0 6 2
6 0 0

The given matrix is not Sparse matrix




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
           if(*(*(arrOne + i)+ j) == 0)
           {
            sum ++;
           }

        }
        
    }
    if(sum >= (size * size)/2)
    {
        printf("The given matrix is Sparse matrix");
    }else
    {
         printf("The given matrix is not Sparse matrix");
    }
   
    
    return 0;
}