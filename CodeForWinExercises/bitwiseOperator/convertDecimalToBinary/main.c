/* 
Write a C program to input any decimal number from user and convert it to binary number system using bitwise operator.
How to convert from decimal number system to binary number system using bitwise operator in C programming.
Logic to convert decimal to binary using bitwise operator in C program..

Example:
Input any number: 22
Binary number: 00000000000000000000000000010110


*/  

#include <stdio.h>
#define   INT_SIZE   (sizeof(int)*8)
int main(void)
{
    int number, i,index, array[INT_SIZE];
    printf("input number: ");
    scanf("%d", &number);
    index = INT_SIZE-1;
    while(index >=0)
    {
        // store LSB 
        array[index] = number &1;

        index--;

        number>>=1;
    }

    for(i = 0; i<INT_SIZE; i++)
    {
        printf("%d", array[i]);
    }

    return 0;
}