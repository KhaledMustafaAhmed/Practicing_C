/*
7. Write a program in C to merge two arrays of the same size sorted in descending order.
Test Data :
Input the number of elements to be stored in the first array :3
Input 3 elements in the array :
element - 0 : 1
element - 1 : 2
element - 2 : 3
Input the number of elements to be stored in the second array :3
Input 3 elements in the array :
element - 0 : 1
element - 1 : 2
element - 2 : 3
Expected Output :
The merged array in decending order is :
3 3 2 2 1 1
*/

#include <stdio.h>
#define SIZE  5
#define MAX   10

int main(void)
{   
    int array1[SIZE],array2[SIZE], merged[MAX];
    int n, i,j, s, temp;
    printf("Input the number of elements to store in the array :");
    scanf("%d", &n);
    printf("Input %d number of elements in the array1 :\n", n);
    for(i=0 ; i<n ; i++)
    {
        printf("element - %d : ", i);
        scanf("%d", &array1[i]);
    }
    printf("Input %d number of elements in the array2 :\n", n);
    for(i=0 ; i<n ; i++)
    {
        printf("element - %d : ", i);
        scanf("%d", &array2[i]);
    }
    s= n*2;
    for(i=0 ;i<n;i++)
    {
        merged[i]=array1[i];
    }
    for(j=0 ;j<n;j++)
    {
        merged[i]=array2[j];
        i++;
    }
    /* sorted merged array */
    for(i=0 ; i<s ; i++)
    {
        for (j = 0; j<s-1; j++)
        {
            if(merged[j] < merged[j+1])
            {
                temp =  merged[j+1];
                 merged[j+1] = merged[j];
                 merged[j] = temp;
            }
        }
        
    }
    printf("The merged array in decending order is : \n");
    for(i=0 ; i<s ; i++)
    {
        printf("%d ", merged[i]);
    }
    
    return 0;
}