/*   
Write a C program to read elements in two matrices and multiply them. Matrix multiplication program in C. 
How to multiply matrices in C. 
Logic to multiply two matrices in C programming.

Input elements of matrix1:
1 2 3
4 5 6
7 8 9
Input elements of matrix2:
9 8 7
6 5 4
3 2 1

Product of matrices =
30 24 18
84 69 54
138 114 90

*/

#include <stdio.h>
int main(void) {
    int arrOne[3][3],arrTwo[3][3], productArray[3][3];
    int row , col, j, sum;
      printf("input 3x3 array one\n"); 
    for(row = 0; row < 3; row++)
    {
        for(col = 0; col < 3; col++)
        {
            scanf("%d", (*(arrOne + row)) + col);
            
        }
        printf("\n");
    }
    printf("input 3x3 array two\n"); 
     for(row = 0; row < 3; row++)
    {
        for(col = 0; col < 3; col++)
        {
            scanf("%d", (*(arrTwo + row)) + col);
            
        }
        printf("\n");
    }
        printf("product of both matrix: \n");
        for(row = 0; row < 3; row++)
        {
            for(col = 0; col < 3; col++)
            {
                sum =0 ;
                for(j = 0; j < 3; j++) 
                {
                    sum += (*(*(arrOne+row) + j)) * (*(*(arrTwo+j) + col));
                }
                *(*(productArray+row) + col) = sum;
                printf("%d ",  *(*(productArray+row) + col));
            }
            printf("\n");
        }



    return 0;
}