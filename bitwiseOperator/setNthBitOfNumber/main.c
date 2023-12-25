/* 
Write a C program to input any number from user and set nth bit of the given number as 1.
How to set nth bit of a given number using bitwise operator in C programming.
Setting nth bit of a given number using bitwise operator.

Example:
Input number: 12
Input nth bit to set: 0
Output: Number after setting nth bit: 13 in decimal

*/

#include <stdio.h>

int main(void) {
    int number;
    int n_th_bit;
    printf("Input number: ");
    scanf("%d", &number);
    printf("Input nth bit to set: ");
    scanf("%d", &n_th_bit);
    printf("Number after setting nth bit: %d in decimal", (number | (1<<n_th_bit)));
    return 0;
}