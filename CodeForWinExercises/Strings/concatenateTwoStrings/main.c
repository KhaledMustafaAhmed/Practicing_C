/* 
Write a C program to concatenate two strings in single string. 
How to concatenate two strings to one without using strcat() library function. Adding two strings into one without using inbuilt library function. 
Logic to concatenate two strings in C programming. C program to concatenate two strings using strcat() library function.

Input string1: I love
Input string2: Codeforwin

Concatenated string: I love Codeforwin



*/

#include <stdio.h>
#define  MAX_SIZE   100

void main(void){
    char stringOne[MAX_SIZE], stringTwo[MAX_SIZE];
    int index = -1, j = 0; 
   printf("input first string: ");
   gets(stringOne)  ;
      printf("input second string: ");
   gets(stringTwo)  ;
   while(stringOne[++index] !='\0');
    while(stringTwo[j] !='\0')
    {
        stringOne[index++] = stringTwo[j++];
    }
    stringOne[index] = '\0';
    puts(stringOne);


        


    return 0;
}