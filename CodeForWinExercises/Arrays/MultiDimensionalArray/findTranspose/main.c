/*   
Write a C program to read elements in a matrix and find transpose of the given matrix. 
How to find transpose of a given matrix in C. 
Logic to find transpose of a matrix in C programming.

Input elements in matrix: 
1 2 3
4 5 6
7 8 9

Transpose: 
1 4 7
2 5 8
3 6 9





*/

#include <stdio.h>
#define size    3
int main(void) {
    int arrOne [ 3][3], trans[3][3];
    int i, j;
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
             *(*(trans + i)+ j)  =  *(*(arrOne + j)+ i) ;
        }
        
    }
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < size; j++)
        {
            printf("%d ", *(*(trans + i)+ j));
        }
        printf("\n");
        
    }

    
    
    return 0;
}