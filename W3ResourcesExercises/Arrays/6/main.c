/*
6. Write a program in C to print all unique elements in an array.
Test Data :
Print all unique elements of an array:
------------------------------------------
Input the number of elements to be stored in the array: 4
Input 4 elements in the array :
element - 0 : 3
element - 1 : 2
element - 2 : 2
element - 3 : 5
Expected Output :
The unique elements found in the array are:
3 5
*/

#include <stdio.h>
#define SIZE  5

int main(void)
{   
    int array[SIZE];
    int n, i,j, flag = 0;
    printf("Input the number of elements to store in the array :");
    scanf("%d", &n);
    printf("Input %d number of elements in the array :\n", n);
    for(i=0 ; i<n ; i++)
    {
        printf("element - %d : ", i);
        scanf("%d", &array[i]);
        
    }
    printf("The unique elements found in the array are: \n");
    for(i=0 ; i<n ; i++)
    {
        
        for(j= 0; j<n ; j++)
        {
            if(array[i] == array[j] && i != j)
             {
                flag = 1;
                break;
             }   
        }
        if(!flag)
        {
            printf("%d ", array[i]);
        }
        flag = 0;
    }
    
    return 0;
}