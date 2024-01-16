/* 
Write a C program to search all occurrences of a character in a string using loop. 
How to find all occurrences of a character in a given string using for loop in C programming. 
Program to print all index of a character in a given string. Logic to search all occurrences of a character in given string in C program.

Input string: I love programming. I love Codeforwin.
Input character to search: o

'o' found at index: 3, 9, 23, 28, 32


*/


#include <stdio.h>
void search(char *string, char c);
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
     search(stringOne, ch);

    return 0;
}
void search(char *string, char c)
{
    int i ;
    for(i=0; string[i] != '\0' ; i++)
    {
        if(string[i] == c)
            {
                printf("index of %c is %d\n",string[i], i);
                
            }
    }
    
    
}