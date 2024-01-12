/*   
Write a C program to read elements in a matrix and interchange elements of primary(major) diagonal with 
econdary(minor) diagonal. C program for interchanging diagonals of a matrix. 
Logic to interchange diagonals of a matrix in C programming.

Input array elements: 
1 2 3
4 5 6
7 8 9

Matrix after interchanging its diagonal:
3 2 1
4 5 6
9 8 7


*/

#include <stdio.h>
#define size    3
int main(void) {
    int arrOne [ 3][3];
    int i, j, temp;
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
      temp =  *(*(arrOne + i) + (size - 1 - i)) ;
        *(*(arrOne + i) + (size - 1 - i)) = *(*(arrOne + i) + i);

*(*(arrOne + i) + i) = temp;
        
    }
    for(i = 0; i < size; i++)
    {
        for(j = 0; j < size; j++)
        {
            printf("%d ", *(*(arrOne + i)+ j) );
        }
        printf("\n");
    }
    
    
    return 0;
}