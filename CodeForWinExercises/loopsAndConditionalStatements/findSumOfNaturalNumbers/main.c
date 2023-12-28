/* 
    Write a C program to find the sum of all natural numbers between 1 to n using for loop.
    How to find sum of natural numbers in a given range in C programming. Logic to find sum of all natural numbers
    in a given range in C programming.

    input: Input upper limit: 10
    output: Sum of natural numbers 1-10: 55

*/

#include   <stdio.h>

int main(void)
{
    int limit, i, sum = 0;
    printf("Input upper limit:");
    scanf("%d", &limit);
    for(i = 1; i<=limit; i++)
    {
        sum+=i;
    }
    printf("Sum All natural numbers 1-%d: %d",limit ,sum);
    return 0;
}