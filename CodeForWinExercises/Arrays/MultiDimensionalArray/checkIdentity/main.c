/*   
Write a C program to read elements in a matrix and check whether matrix is an Identity matrix or not. 
C program for finding Identity matrix. 
Logic to check identity matrix in C programming.

Input elements in matrix: 
1 0 0
0 1 0
0 0 1

It is an Identity matrix


*/

#include <stdio.h>
#define size    3
int main(void) {
    int arrOne [ 3][3];
    int i, j, flag = 0;
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
            if((i == j && *(*(arrOne + i)+j) == 1))
            {
               continue; 
            }
            else if( *(*(arrOne + i)+j) != 0)
            {
                flag = 1;
            }

        }
        if(flag)
        {
            break;
        }
    }
    if(flag)
    {
        printf("not identity");
    }
    else
    {
         printf(" identity");
    }
   
    
    return 0;
}