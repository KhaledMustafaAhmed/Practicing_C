/*   
Write a C program to enter elements in two matrices and check whether both matrices are equal or not. 
C program to check whether elements of two matrices are equal or not. 
Logic to check if two matrices are equal or not in C programming.

Input elements of matrix1:
1 2 3
4 5 6
7 8 9

Input elements of matrix2:
1 2 3
4 5 6
7 8 9

Both matrices are equal


*/

#include <stdio.h>
int main(void) {
    int arrOne [ 3][3], arrTwo [ 3][3];
    int i, j, flag = 0;
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

    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
           if(*(*(arrOne + i) + j) == *(*(arrTwo + i) + j))
           {
            continue;
           }
           else
           {
            flag = 1;
            printf("Not Equal");
            break;
           }
        }
        if(flag)
        {
            break;
        }
        
    }
    if(!flag)
    {
        printf("Equal");
    }
    return 0;
}