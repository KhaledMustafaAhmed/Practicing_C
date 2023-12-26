/* 
Write a C program to input a number and find sum of first and last digit of the number using for loop.
How to find sum of first and last digit of a number in C programming using loop.
Logic to find sum of first and last digit of a number without using loop in C program.

input: Input number: 12345

output: Sum of first and last digit: 6
*/

#include  <stdio.h>

int main(void)
{   
    int number, firstDigit, lastDigit;
    printf("Enter number: ");
    scanf("%d",&number);
    firstDigit = number%10;
    do
    {
        lastDigit = number;
        number /= 10;
    } while (number > 0);
    printf("Sum of first and last digit: %d", firstDigit+ lastDigit);
   
   
    return 0;
}