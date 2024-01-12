/*   
Write a C program to read elements in a matrix and find sum of lower triangular matrix.
 How to find sum of lower triangular matrix in C.
  Logic to find sum of lower triangular matrix in C programming.

Input elements in matrix:
1 0 0
4 5 0
7 8 9

Sum of lower triangular matrix = 19

*/

#include <stdio.h>
#define size    3
int main(void) {
    int arrOne [ 3][3];
    int i, j, lower = 0, sum = 0;
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
            if(i > j )
            {
                sum += *(*(arrOne +i) +j);
            }
        }
       
    }
    
    
        printf("sum of lower: %d", sum);
    
    
    return 0;
}