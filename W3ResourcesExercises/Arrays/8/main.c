/*
8. Write a program in C to count the frequency of each element of an array.
Test Data :
Input the number of elements to be stored in the array :3
Input 3 elements in the array :
element - 0 : 25
element - 1 : 12
element - 2 : 43
Expected Output :
The frequency of all elements of an array :
25 occurs 1 times
12 occurs 1 times
43 occurs 1 times

*/

#include <stdio.h>
#define SIZE  5
#define MAX   10

int main(void)
{   
    int array[SIZE],freq[SIZE]={0};
    int n, i,j;
    printf("Input the number of elements to store in the array :");
    scanf("%d", &n);
    printf("Input %d number of elements in the array1 :\n", n);
    for(i=0 ; i<n ; i++)
    {
        printf("element - %d : ", i);
        scanf("%d", &array[i]);
        
    }
    for(i=0; i<n; i++)
    {
        for(j=0 ;j<n; j++)
        {
            if(array[i] == array[j])
                freq[i]++;
        }
    }
    printf("The frequency of all elements of an array : \n");
    for(i=0 ; i<n ; i++)
    {
        printf("%d occurs %d times : \n", array[i], freq[i]);
    }
 
    return 0;
}