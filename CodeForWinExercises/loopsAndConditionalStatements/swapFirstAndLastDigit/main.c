/* 
Write a C program to input a number from user and swap first and last digit of the given number.
How to swap first and last digits of a number in C programming. Logic to swap first and last digit of a number in C program.

input: Input any number: 12345

output: Number after swapping first and last digit: 52341

*/

#include <stdio.h>
#include <math.h>

int main(void)
{   
    int number, numDigits, firstDigit, lastDigit, multiplier;
    
    printf("Enter Number: ");
    scanf("%d", &number);
    
    numDigits = log10(number) + 1;
    multiplier = pow(10, numDigits - 1);
    
    firstDigit = number / multiplier;
    lastDigit = number % 10;
    
    int middleDigits = (number % multiplier) / 10;
    
    int numberSwapped = lastDigit * multiplier + middleDigits * 10 + firstDigit;
    
    printf("Number after swapping first and last digit: %d\n", numberSwapped);

    return 0;
}
