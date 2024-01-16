/* 
Write a C program to count total number of alphabets, digits or special characters in a string using loop. 
How to find total number of alphabets, digits and special characters in a string in C programming.

Input string: I love Codeforwin.


Toggled case string: Alphabets = 15
Digits = 0
Special characters = 3




*/

#include <stdio.h>
#define  MAX_SIZE   100

void main(void){
    char stringOne[MAX_SIZE];
    char *ptr = stringOne;
    int alphabets = 0 , digits = 0, special = 0;
   printf("input first string: ");
   gets(stringOne) ;
   while(*ptr)
   {
    if(*ptr >= 'A' && *ptr <= 'Z' || *ptr >= 'a' && *ptr <= 'z')
    {
        alphabets++;
    }
    else if(*ptr >= '0' && *ptr <= '9')
    {
        digits++;
        
    }
    else
    {
        special++;
    }
    ptr++;
   }
   printf("alphabets    digits    special \n");
   printf("%6d    %6d    %6d", alphabets , digits , special );
   
    
}
