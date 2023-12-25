/* 
Write a C program to input any number from user and check whether nth bit of the given number is set (1) or not (0).
How to check whether nth bit of a given number is set or unset using bitwise operator in C programming.
C program to get the status of nth bit of a number.

Example:
Input number: 12
Input nth bit number: 2
Output: 2 bit of 12 is set (1)

*/

#include <stdio.h>

int main(void) {
    int number;
    int n_th_bit;
    printf("Input number: ");
    scanf("%d", &number);
    printf("Input n_th_bit: ");
    scanf("%d", &n_th_bit);
    (number & (1<<n_th_bit)) ? printf("%d bit of %d is set by (1)", n_th_bit ,number) : printf("%d bit of %d is set by (1)", n_th_bit ,number);
    return 0;
}