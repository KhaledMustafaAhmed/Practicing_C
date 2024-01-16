/* 
Write a C program to copy one string to another string using loop. 
C program to copy one string to another without using inbuilt library function strcpy(). 
How to copy one string to another without using inbuilt string library function in C programming. Effective logic to copy strings in C programming. How to copy one string to another string using strcpy() function in C program.

Input string: I love Codeforwin!

Original string: I love Codeforwin!
Copied string: I love Codeforwin!

*/

#include <stdio.h>
#define  MAX_SIZE   100

void main(void){
    char stringOne[MAX_SIZE], stringTwo[MAX_SIZE];
    char *ptrOne = stringOne;
    char *ptrTwo = stringTwo;
    printf("Input string: ");
    gets(stringOne);
    while(*(ptrTwo++) = *(ptrOne++));
    printf("Output string: %s\n", stringOne);
        printf("Coped string: %s\n", stringTwo);

        


    return 0;
}