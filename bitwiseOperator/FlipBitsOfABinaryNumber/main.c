/* 
Write a C program to input a number from user and flip all bits of the given number (in binary representation)
using bitwise operator. How to flip all bits of a binary number using bitwise operator in C programming.

Example:
Input any number: 22
Number after bits are flipped: -23 (in decimal)

*/

#include <stdio.h>

int main(void) {
   int number; 
   printf("Input any number: ");
   scanf("%d", &number);
   printf("Number after bits are flipped: %d (in decimal)", (number ^ (~0)));
        

    return 0;
}