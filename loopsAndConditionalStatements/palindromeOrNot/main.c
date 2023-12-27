/* 
Write a C program to input number from user and check number is palindrome or not using loop.
How to check whether a number is palindrome or not using loop in C programming.
Logic to check palindrome number in C programming.

input: Input any number: 121
output: 121 is palindrome
*/

#include  <stdio.h>
int main(void)
{
    int number, reversedNumber = 0,copyOfNumber;
    printf("Enter Number: ");
    scanf("%d", &number);
    copyOfNumber = number;
    while(copyOfNumber > 0)
    {
        reversedNumber*=10;
        reversedNumber += (copyOfNumber%10);
        copyOfNumber /= 10;
    }
    reversedNumber == number?printf("%d is palindrome ", number):printf("%d is Not palindrome ", number);

    return 0;
}