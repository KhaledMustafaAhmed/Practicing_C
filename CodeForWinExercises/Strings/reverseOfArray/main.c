/* 
Write a C program to find reverse of a given string using loop. 
How to find reverse of any given string using loop in C programming. 
Logic to find reverse of a string without using strrev() function in C.
 C program to reverse a string using strrev() string function.

input: Hello
 
Reverse string: olleH

*/

/**
 * C program to count total number of words in a string
 */

#include <stdio.h>

#define MAX_SIZE 100 // Maximum string size

int main()
{
    char string[MAX_SIZE], reverseString[MAX_SIZE];
    int i,j;
    printf("input first string: ");
    gets(string);
    for(i = 0; string[i] != '\0'; i++);
    i--;
    for(j=0 ; i>-1; i--,j++)
    {
        reverseString[j]= string[i];
    }
    reverseString[j]= '\0';
    printf("%s", reverseString);
    return 0;
}