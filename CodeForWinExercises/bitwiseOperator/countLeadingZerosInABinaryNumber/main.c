/* 
Write a C program to input any number from user and find total number of leading zeros of the given number.
How to find total leading zeros of a given number (in binary representation) using bitwise operator in C programming. 
Logic to count total leading zeros of a given number using C programming.

Example:
Input any number: 22
Output leading zeros: 27 (using 4 byte signed integer)

*/

#include <stdio.h>

#define   INT_SIZE  (sizeof(int)*8)
int main(void) {
    int number, count = 0, MSB, i;
    // Input any number
    printf("Input any number: ");
    scanf("%d", &number);

    MSB = 1<<(INT_SIZE-1);


    // Check if the number is zero
    for(i = 0; i<INT_SIZE; i++)
    {
        if((number <<i )& MSB)
        {
            break;
        }
            count++;
        
    }
    printf("leading zeros: %d", count);

    return 0;
}