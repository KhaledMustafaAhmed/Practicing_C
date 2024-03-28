/*
18. Write a program in C to find a pair with given sum in the array.
Expected Output :
The given array : 6 8 4 -5 7 9
The given sum : 15
Pair of elements can make the given sum by the value of index 0 and 5
*/

#include <stdio.h>
#define SIZE  10
#define MAX   10

int main(void)
{   
    int array[6];
    int i,j,sum, flag = 0;
    printf("The given array : ");
    for(i=0;i<6; i++)
    {
        scanf("%d",&array[i]);
    }
    printf("The given sum : ");
    scanf("%d",&sum);
    for(i=0;i<6;i++)
    {
        for(j=0;j<5; j++)
        {
            if(array[i] + array[j+1] == sum)
            {
                printf("Pair of elements can make the given sum by the value of index %d and %d", i,j+1);
                flag = 1;
                break;
            }
        }
        if(flag)
            break;
    }

   
    return 0;
}