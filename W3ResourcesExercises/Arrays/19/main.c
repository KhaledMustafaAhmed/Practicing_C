/*
19. Write a program in C to find the C element of an array.
A majority element in an array A[] of size n is an element that appears more than n/2 times (and hence there is at most one such element).
Expected Output :
The given array is : 4 8 4 6 7 4 4 8
There are no Majority Elements in the given array.
*/

#include <stdio.h>
#define SIZE  10
#define MAX   10

int main(void)
{   
    int array[8];
    int i,j,majority = 4, count = 1, flag = 0;
    printf("The given array : ");
    for(i=0;i<8; i++)
    {
        scanf("%d",&array[i]);
    }
   for(i=0 ; i<8 ; i++)
   {
    for(j=i+1 ; j<8; j++)
    {
        if(array[i] == array[j])
            count++;    
    }
    if(count > majority)
    {
        printf("Majority : %d \n",array[i]); 
        flag = 1;
    }
    count = 1;
    
   }
   if(!flag)
   {
    printf("There are no Majority Elements in the given array.");
   }
   
    return 0;
}