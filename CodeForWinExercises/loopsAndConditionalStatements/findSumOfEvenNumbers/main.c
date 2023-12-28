/* 
Write a C program to input number from user and find sum of all even numbers between 1 to n.
How to find sum of even numbers in a given range using loop in C programming. 
Logic to find sum of even numbers in a given range in C program. 

input: Input upper limit of even number: 10
output: Sum of even numbers between 1 to 10: 30

*/

#include  <stdio.h>

int main(void)
{
    int limit, i, sum = 0;
    printf("Input upper limit of even number:") ;
    scanf("%d", &limit);
    for(i = 2; i<=limit; i+=2)
    {
        sum+=i;
    }

    printf("Sum of even numbers between 1 to %d:  %d\n", limit, sum);

    return 0;
}