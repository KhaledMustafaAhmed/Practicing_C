/* 
Write a C program to count all occurrences of a character in a string using loop. 
How to find total occurrences of a given character in a string using for loop in C programming. 
Logic to count total occurrences of a character in a given string in C program.

Input string: I love programming. I love Codeforwin.
Input character to search: o

Total occurrences of 'o': 5



*/


#include <stdio.h>
int count(char *string, char c);
#define MAX_SIZE 100 // Maximum string size
int main()
{
    char stringOne[MAX_SIZE];
    char ch;
    char *ptr = stringOne;
    int result ;
    printf("input string: ");
    gets(stringOne);
    printf("input character: ");
    scanf(" %c", &ch);
      printf("count of %c is %d", ch, count(stringOne, ch));

    return 0;
}
int count(char *string, char c)
{
    int i ,res = 0;
    for(i=0; string[i] != '\0' ; i++)
    {
        if(string[i] == c)
           res++;
    }
    
    return res;
}