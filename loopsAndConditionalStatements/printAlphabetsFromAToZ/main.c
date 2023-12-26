/*
Write a C program to print alphabets from a to z using for loop.
How to print alphabets using loop in C programming.
Logic to print alphabets from a to z using for loop in C programming.

output: Alphabets: a, b, c, ... , x, y, z
*/

#include <stdio.h>

int main(void)
{   
    char i; 
    printf("Alphabets:");
    for(i = 'a'; i<= 'z'; i++)
    {
        printf(" %c,", i);
    }

    return 0;
}