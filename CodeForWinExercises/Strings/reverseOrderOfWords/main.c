/* 
Write a C program to input any string from user and reverse the order of words. 
How to reverse the order of words in a given string using C programming. 
Logic to reverse the order of words in a sentence using C program.

Input string : I love learning programming at Codeforwin

Reversed order of words: 
Codeforwin at programming learning love I



*/

/**
 * C program to count total number of words in a string
 */

#include <stdio.h>

#define MAX_SIZE 100 // Maximum string size
int main()
{
    char stringOne[MAX_SIZE], reverseOne[MAX_SIZE];
    char *ptr = stringOne;
    int lenght = 0,index = 0, wordStart, wordEnd;
    printf("input string: ");
    gets(stringOne);
    while(*(ptr++) != '\0')
    {
        lenght++;
    }
    wordStart = lenght - 1;
    wordEnd = lenght - 1;
    
    return 0;
}
