/* 
Write a C program to input any number from user and toggle or invert or flip nth bit of the given number using bitwise operator.
How to toggle nth bit of a given number using bitwise operator in C programming.
C program set nth bit of a given number if it is unset otherwise unset if it is set.

Example:
Input number: 22
Input nth bit to toggle: 1
Output: After toggling nth bit: 20 (in decimal)

*/

#include <stdio.h>

int main(void) {
    int number;
    int n_th_bit;
    printf("Input number: ");
    scanf("%d", &number);
    printf("Input nth bit to toggle: ");
    scanf("%d", &n_th_bit);
    
    printf("Number after clearing nth bit: %d in decimal", (number ^ ((1<<n_th_bit))));
    return 0;
}
 