/* 
Write a C program to input any number from user and check whether Most Significant Bit (MSB) of given number
is set (1) or not (0). How to check whether Most Significant Bit of any given number is set or not using bitwise operator
in C programming. C program to get the status of the most significant bit of a number. 

Example:
Input number: -1
Output: Most Significant Bit (MSB) of -1 is set (1).

*/

#include <stdio.h>
#define MSB (1<<7)
int main(void) {
    int number;
    printf("Input number: ");
    scanf("%d", &number);
    (number & MSB) ? printf("Most Significant Bit (MSB) of %d is set(1)", number) : printf("LMost Significant Bit (MSB) of %d is set(0)", number);
    return 0;
}