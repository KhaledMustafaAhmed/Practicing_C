/*   
Write a C program to read elements in a matrix and find the sum of main diagonal (major diagonal) elements of matrix. 
Find sum of all elements of main diagonal of a matrix. 
Logic to find sum of main diagonal elements of a matrix in C programming.

Input array elements: 
1 2 3
4 5 6
7 8 9

Sum of main diagonal elements = 15



*/

#include <stdio.h>
int main(void) {
    int arrOne [ 3][3];
    int i, j, sum = 0;
    printf("input 3x3 array \n"); 
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            scanf("%d", (*(arrOne + i)) + j);
            
        }
        printf("\n");
    }
    for(i = 0; i < 3; i++)
    {
      
            sum +=  *(*(arrOne + i) + i) ;
           
       
        
    }
    printf("%d", sum);
    
    return 0;
}