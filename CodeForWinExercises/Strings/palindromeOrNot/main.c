/* 
Write a C program to check whether a string is palindrome or not without using loop. 
How to check whether a string is palindromic string or not in C programming. 
Logic to check palindrome string in C program.

Input string: madam

Palindrome string



*/

/**
 * C program to count total number of words in a string
 */

#include <stdio.h>

#define MAX_SIZE 100 // Maximum string size
int compare(const char *a, const char *b);
int main()
{
    char string[MAX_SIZE], reverseString[MAX_SIZE];
    int i,j,result;
    printf("input first string: ");
    gets(string);
    for(i = 0; string[i] != '\0'; i++);
    i--;
    for(j=0 ; i>-1; i--,j++)
    {
        reverseString[j]= string[i];
    }
    reverseString[j]= '\0';
    result = compare(string, reverseString);
    (!result) ? printf("plaindorm"): printf("not");

    
    return 0;
}
int compare(const char *a, const char *b)
{
    while((*a && *b) && (*a == *b))
    {
        a++;
        b++;
    }
    return  *a - *b;
}