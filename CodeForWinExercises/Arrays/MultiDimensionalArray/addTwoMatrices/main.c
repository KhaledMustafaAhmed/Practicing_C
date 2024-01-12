/*   
Write a C program to read elements in two matrices and add elements of both matrices. 
C program for addition of two matrix. Matrix addition program in C. 
Logic to add two matrix in C programming.

Input elements in 3x3 matrix1: 
1 2 3
4 5 6
7 8 9
Input elements in 3x3 matrix2:
9 8 7
6 5 4
3 2 1


Sum of both matrix =
10 10 10
10 10 10
10 10 10
*/

#include <stdio.h>
int main(void) {
    int arrOne [ 3][3], arrTwo [ 3][3], sumArr[3][3];
    int i, j;
    printf("input 3x3 array one\n"); 
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            scanf("%d", (*(arrOne + i)) + j);
            
        }
        printf("\n");
    }
    printf("input 3x3 array two\n"); 
     for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            scanf("%d", (*(arrTwo + i)) + j);
            
        }
        printf("\n");
    }

    printf("Sum of both matrix: \n");
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            *(*(sumArr + i) + j) = *(*(arrTwo + i) + j) + *(*(arrOne + i) + j);
            printf("%d ", *(*(sumArr + i) + j));
        }
        printf("\n");
    }
    return 0;
}