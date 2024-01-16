/* 
Write a C program to convert string from lowercase to uppercase string using loop. 
How to convert string from lowercase to uppercase using for loop in C programming. 
C program to convert lowercase to uppercase string using strupr() string function..

Input string: I love Codeforwin.


I LOVE CODEFORWIN.


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
    *ptr = (*ptr > 'a' && *ptr < 'z') ? *ptr - 32: *ptr;
    ptr++;
   }
   puts(stringOne);
   
    return 0;
}
