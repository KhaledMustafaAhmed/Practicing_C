/* 
Write a C program to input a number and calculate its factorial using for loop.
How to find factorial of a number in C program using loop. 
Logic to find factorial of a number in C programming.

Input number: 5


output:Factorial: 120



*/
#include <stdio.h>
int main(void)
{   
    int number, factorial = 1, i;
    printf("Number: ");
    scanf("%d",&number);
    for(i=1; i<=number; i++)
    {
        factorial *= i;
    }
    printf("Factorial: %d", factorial);


    return 0;
}