/* 
Write a C program to input any number and check whether the given number is even or odd using bitwise operator.
How to check whether a number is even or odd using bitwise operator in C programming. 
Logic to check even odd using bitwise operator in C programming.

Example: 
Input number: 12

Output: 12 is even

*/ 

#include  <stdio.h>

int main(void)
{
    int number;
    printf("Input number: ");
    scanf("%d", &number);
    if(number & 1)
        {
            printf("%d is odd", number);
            
        }
        else
        {
            printf("%d is even", number);
        }

    return 0;
}