/* 
Write a C program to input a number from user and print it into words using for loop.
How to display number in words using loop in C programming.
Logic to print number in words in C programming.

input: Input number: 1234


output: One Two Three Four
*/

#include  <stdio.h>
int main(void)
{
    int number;
    printf("Enter Number: ");
    scanf("%d", &number);
    while(number > 0)
    {
        switch(number % 10)
        {
            case 0: printf("Zero "); break;
            case 1: printf("One "); break;
            case 2: printf("Two "); break;
            case 3: printf("Three "); break;
            case 4: printf("Four "); break;
            case 5: printf("Five "); break;
            case 6: printf("Six "); break;
            case 7: printf("Seven "); break;
            case 8: printf("Eight ");break;
            case 9: printf("nine ");break;
        }
        number/= 10;
    }
   

    return 0;
}