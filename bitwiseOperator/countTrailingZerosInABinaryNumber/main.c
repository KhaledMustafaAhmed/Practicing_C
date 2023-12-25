/* 
Write a C program to input any number from user and count number of trailing zeros in the given number using bitwise operator.
How to find total number of trailing zeros in any given number using bitwise operator in C programming.

Example:
Input any number: 22
Output: Trailing zeros: 1

*/

#include <stdio.h>

int main(void) {
    int number, count = 0;

    // Input any number
    printf("Input any number: ");
    scanf("%d", &number);

    // Check if the number is zero
    if (number == 0) {
        printf("Trailing zeros: Infinite (the number is zero)\n");
    } else {
        // Count trailing zeros using bitwise AND
        while (((number & 1) == 0) && (number != 0)) {
            count++;
            number >>= 1; // Right shift the number
        }


        printf("Trailing zeros: %d\n", count);
    }

    return 0;
}