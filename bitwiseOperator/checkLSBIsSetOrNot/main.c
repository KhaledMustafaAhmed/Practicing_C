/* 
Write a C program to input any number from user and check whether the Least Significant Bit (LSB) 
of the given number is set (1) or not (0). How to check whether the least significant bit of a number is set 
or unset using bitwise operator in C programming. C program to get the status of least significant bit of a number. 

Example:
Input number: 11 
Output: Least Significant Bit of 11 is set (1).

*/

#include <stdio.h>
#define LSB 1
int main(void) {
    int number;
    printf("Input number: ");
    scanf("%d", &number);
    number & LSB ? printf("Least Significant Bit of %d is set(1)", number) : printf("Least Significant Bit of %d is set(0)", number);
    return 0;
}
