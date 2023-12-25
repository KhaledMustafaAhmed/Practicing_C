/* 
Write a C program to input any two numbers from user and swap values of both numbers using bitwise operator.
How to swap two number using bitwise operator in C programming. Logic to swap two numbers using bitwise operator 
in C programming.

Example: 
Input first number: 22
Input second number: 65

First number after swapping: 65
Second number after swapping: 22

*/ 

#include  <stdio.h>


int main(void)
{
    int x=22, y=65;

    printf("X before swapping: %d, y before swapping: %d\n",x,y);

    x = x^y;
    y = y^x;
    x = x^y;
    printf("X before swapping: %d, y after swapping: %d\n",x,y);



    return  0;
}