/* 
Write a C program to find length of a string using loop. 
How to find length of a string without using in-built library function strlen() in C programming. 
Effective way to find length of a string without using strlen() function. How to find length of a string using strlen() string function.

Input string: I love programming. I love Codeforwin.

Length of string: 38

*/

#include <stdio.h>
#define  MAX_SIZE   100

void main(void){
    char string[MAX_SIZE];
    char *ptr = string;
    int count = 0;
    printf("Input string: ");
    gets(string);
    while(*(ptr++) != '\0')
        count++;
    printf("Length of string: %d", count);

    return 0;
}