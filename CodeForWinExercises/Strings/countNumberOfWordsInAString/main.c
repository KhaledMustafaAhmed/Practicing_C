/* 
Write a C program to count total number of words in a string using loop. 
How to find total number of words in a given string using loops in C programming. 
Logic to count total number of words in a string.

Input string: I love Codeforwin.



Total number of words: 4
*/

/**
 * C program to count total number of words in a string
 */

#include <stdio.h>

#define MAX_SIZE 100 // Maximum string size

int main()
{
    char str[MAX_SIZE];
    char prevChar;
    int i, words;

    /* Input string from user */
    printf("Enter any string: ");
    gets(str);

    i = 0;
    words = 0;
    prevChar = '\0'; // The previous character of str[0] is null

    /* Runs loop infinite times */
    while(1)
    {
        if(str[i]==' ' || str[i]=='\n' || str[i]=='\t' || str[i]=='\0')
        {
            /**
             * It is a word if current character is whitespace and
             * previous character is non-white space.
             */
            if(prevChar != ' ' && prevChar != '\n' && prevChar != '\t' && prevChar != '\0')
            {
                words++;
            }
        }

        /* Make the current character as previous character */
        prevChar = str[i];

        if(str[i] == '\0')
             break;
        else
             i++;
    }

    printf("Total number of words = %d", words);

    return 0;
}