/* 
Write a C program to input any number from user and clear the nth bit of the given number using bitwise operator.
How to clear nth bit of a given number using bitwise operator in C programming.
How to unset (0) the value of nth bit of a given number in C.

Example:
Input number: 13
Input nth bit to clear: 0
Output: Number after clearing nth bit: 12 (in decimal)

*/

#include <stdio.h>

int main(void) {
    int number;
    int n_th_bit;
    printf("Input number: ");
    scanf("%d", &number);
    printf("Input nth bit to clear: ");
    scanf("%d", &n_th_bit);
    printf("Number after clearing nth bit: %d in decimal", (number & (~(1<<n_th_bit))));
    return 0;
}
 