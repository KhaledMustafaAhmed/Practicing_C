/*
5. Write a program in C to count the total number of duplicate elements in an array.
Test Data :
Input the number of elements to be stored in the array :3
Input 3 elements in the array :
element - 0 : 5
element - 1 : 1
element - 2 : 1
Expected Output :
Total number of duplicate elements found in the array is : 1
*/

#include <stdio.h>
#define SIZE  5

int main(void)
{   
    int array[SIZE];
    int n, i,j, duplicate = 0;
    printf("Input the number of elements to store in the array :");
    scanf("%d", &n);
    printf("Input %d number of elements in the array :\n", n);
    for(i=0 ; i<n ; i++)
    {
        printf("element - %d : ", i);
        scanf("%d", &array[i]);
        
    }
    for(i=0 ; i<n ; i++)
    {
        for(j= i+1; j<n ; j++)
        {
            if(array[i] == array[j])
                duplicate++;
        }
    }
    printf("Total number of duplicate elements found in the array is : %d\n", duplicate);
    
    return 0;
}