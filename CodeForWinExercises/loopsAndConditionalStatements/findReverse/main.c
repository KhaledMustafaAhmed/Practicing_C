/* 
Write a C program to input a number from user and find reverse of the given number using for loop.
How to find reverse of any number using loop in C program. Logic to find reverse of a number in C programming.

input: Input number: 12345
output: Reverse of 12345 = 54321
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
    printf("Reverse of %d = %d\n", number, reversedNumber);

    return 0;
}