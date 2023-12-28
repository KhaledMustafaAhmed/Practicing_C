/* 
Write a C program input two numbers from user and find the HCF using for loop.
How to find GCD of two given numbers using loops in C programming. 
Logic to find HCF of two number in C programming.

Input first number: 12
Input second number: 30


output: HCF of 12 and 30: 6



*/
#include <stdio.h>
int main(void)
{   
    int numberone, numbertwo, min,i,GCD;
    printf("Number one: ");
    scanf("%d", &numberone);
    printf("Number two: ");
    scanf("%d", &numbertwo);
    min = numberone > numbertwo ? numbertwo : numberone;
    for(i = 1; i <=min; i++)
    {
        if(numberone%i == 0 && numbertwo%i == 0)
            GCD = i;
    }
    printf("GCD: %d",GCD);

    return 0;
}