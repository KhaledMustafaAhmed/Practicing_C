/* 
Write a C program to input a number from user and count total number of ones (1s) and zeros (0s)
in the given number using bitwise operator. How to count zeros and ones in a binary number using bitwise operator
in C programming.ng.

Example:
Input any number: 22
Output number of ones: 3
Output number of zeros: 29

*/

#include <stdio.h>
#define INT_SIZE  (sizeof(int)*8)
int main(void) {
   int number, ones, zeros,i;
    printf("Input number: ");
    scanf("%d", &number);
    for(i = 0; i< INT_SIZE-1; i++)
    {
        if(number & (1<<i))
        {
            ones++;
        }
        else
        {
            zeros++;
        }
    }        
    printf("ones: %d\n Zeros: %d", ones,zeros);

    return 0;
}