/*   
Write a C program to read elements in a matrix and find the sum of elements of each row and columns of matrix. 
C program to calculate sum of rows and columns of matrix. 
Logic to find sum of each row and columns of a matrix in C programming.

Input array elements: 
1 2 3
4 5 6
7 8 9

Sum of row 1 = 6
Sum of row 2 = 15
...
...
Sum of column 3 = 18



*/

#include <stdio.h>
#define size    3
int main(void) {
    int arrOne [3][3];
    int i, j, sum = 0;
    printf("input 3x3 array \n"); 
    for(i = 0; i < size; i++)
    {
        for(j = 0; j < size; j++)
        {
            scanf("%d", (*(arrOne + i)) + j);
            
        }
        printf("\n");
    }
    for(i = 0; i < size; i++)
    {
      sum = 0;
        for(j = 0; j < size; j++)
        {
           sum += *(*(arrOne + i) + j) ;
        }
         printf("sum of row %d %d\n",i ,sum);
    }
    
   for(i = 0; i < size; i++)
    {
        sum = 0;
        for(j = 0; j < size; j++)
        {
              sum += *(*(arrOne + j) + i);
        }
       printf("sum of col %d %d\n",i ,sum);
    }
    
    
    return 0;
}