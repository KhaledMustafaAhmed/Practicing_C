/* 
Write a C program to input a number from user and print multiplication table of the given number using for loop.
How to print multiplication table of a given number in C programming. Logic to print multiplication table of any given
number in C program.

input: Input num: 5

output: 
5 * 1  = 5
5 * 2  = 10
5 * 3  = 15
5 * 4  = 20
5 * 5  = 25
5 * 6  = 30
5 * 7  = 35
5 * 8  = 40
5 * 9  = 45
5 * 10 = 50

*/

#include  <stdio.h>

int main(void)
{
    int num, i;
    printf("Enter input number");
    scanf("%d", &num);
    for(i = 1; i<=10; i++) 
    {
    printf("%d * %d = %d\n", num,i, num*i);
    }

    return 0;
}