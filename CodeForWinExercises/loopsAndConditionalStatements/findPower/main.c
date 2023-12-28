/* 
Write a C program to find power of a number using for loop. 
How to find power of a number without using built in library functions in C program.
Logic to find power of any number without using pow() function in C programming.

input: Input base: 2
Input exponent: 5

output: 2 ^ 5 = 32

*/
#include <stdio.h>
int main(void)
{   
    int number, power, i,reslut = 1;
    printf("Enter number: ");
    scanf("%d", &number);
    
    printf("Enter power of number: ");
    scanf("%d", &power);
    for(i=1;i<=power; i++)
    {
        reslut=reslut * number;
    }
    printf("%d ^ %d = %d", number, power, reslut);

    


    return 0;
}