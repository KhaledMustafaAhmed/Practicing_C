/*
20. Write a program in C to find the number occurring odd number of times in an array.
All numbers occur even number of times except one number which occurs odd number of times.
Expected Output :
The given array is : 8 3 8 5 4 3 4 3 5
The element odd number of times is : 3
*/

#include <stdio.h>
#define SIZE  9
#define MAX   10

int main(void)
{   
    int array[SIZE];
    int i,j,odd = 0;
    printf("The given array : ");
    for(i=0;i<SIZE; i++)
    {
        scanf("%d",&array[i]);
    }
    /* XOR if two numbers are same two will be zeroes */
   for(i=0;i<SIZE;i++)
    {
        odd = odd ^ array[i];
    }  
    if(odd)
    {
        printf("The element odd number of times is : %d\n",odd);
    }
    else
    {
         printf("no elements");
    }
    return 0;
}