/* 
Write a C program to input a number and calculate sum of digits using for loop.
How to find sum of digits of a number in C program. Logic to find sum of digits of a given number in C programming.

input: Input any number: 1234


output: Sum of digits: 10

*/


#include <stdio.h>
int main(void)
{
    int number, sum = 0;
    printf("Enter Number: ");
    scanf("%d", &number);
    while(number > 0)
    {
        sum += (number%10);
        number /= 10;
    }
    printf("Sum of digits: %d\n", sum);
    return 0;
}