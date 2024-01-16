/* 
Write a C program to convert uppercase string to lowercase using for loop. 
How to convert uppercase string to lowercase without using inbuilt library function strlwr(). 
How to convert string to lowercase using strlwr() string function.

Input string: I love CODEFORWIN.


Lowercase string: i love codeforwin.



*/

#include <stdio.h>
#define  MAX_SIZE   100

void main(void){
    char stringOne[MAX_SIZE];
    char *ptr = stringOne;
   printf("input first string: ");
   gets(stringOne) ;
   while(*ptr)
   {
    *ptr = (*ptr >= 'A' && *ptr <= 'Z') ? *ptr + 32: *ptr;
    ptr++;
   }
   puts(stringOne);
   
    return 0;
}
