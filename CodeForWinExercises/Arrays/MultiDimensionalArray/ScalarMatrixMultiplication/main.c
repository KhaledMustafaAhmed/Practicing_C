/*   
Write a C program to read elements in a matrix and perform scalar multiplication of matrix. 
C program for scalar multiplication of matrix. 
How to perform scalar matrix multiplication in C programming. 
Logic to perform scalar matrix multiplication in C program.

Input elements of matrix A:
1 2 3
4 5 6
7 8 9
Input multiplier: 2


2  4  6
8 10 12
14 16 18
*/

#include <stdio.h>
int main(void) {
    int arr[3][3];
    int i,j,multiplier;
    printf("Input elements of arr: \n");
      for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            scanf("%d", (*(arr + i)) + j); 
        }
        printf("\n");
    }
    printf("input multiplier:  ");
    scanf("%d",&multiplier);

    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            *(*(arr + i) + j) *= multiplier;
            printf("%d ", *(*(arr + i) + j));
        }
        printf("\n");
    }
    return 0;
}