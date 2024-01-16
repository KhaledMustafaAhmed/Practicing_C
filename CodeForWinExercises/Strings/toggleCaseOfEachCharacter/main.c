/* 
Write a C program to toggle case of each characters of a string using loop. 
How to change case of each characters of a string in C programming. 
Program to swap case of each characters in a string using loop in C. 
Logic to reverse the case of each character in a given string in C program.

Input string: Learn at Codeforwin.


Toggled case string: lEARN AT cODEFORWIN.




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
    if(*ptr >= 'A' && *ptr <= 'Z')
    {
        *ptr = *ptr + 32; 
        
    }
    else if(*ptr >= 'a' && *ptr <= 'z')
    {
        *ptr =  *ptr - 32;
        
    }
    ptr++;
   }
   printf("%s", stringOne);
   
    
}
