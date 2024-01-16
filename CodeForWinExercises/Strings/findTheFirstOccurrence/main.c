/* 
Write a C program to input any string from user and find the last occurrence of a given character in the string. 
How to find the last occurrence of a given character in the string. 
Logic to find last occurrence of a given character in a string in C program.

Input string: I love Codeforwin.
Input character to search: o

Last index of 'o' is 12.




*/

/**
 * C program to count total number of words in a string
 */

#include <stdio.h>
int isFounded(char *string, char c);
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
    result = isFounded(stringOne,ch);
    if(result)
    {
        printf("%d ", result);
    }
    else
    {
        printf("not");
    }
    return 0;
}
int isFounded(char *string, char c)
{
    int i ,res, flag = 0;
    for(i=0; string[i] != '\0' ; i++)
    {
        if(string[i] == c)
            {
                res = i;
                flag = 1;
                
            }
    }
    return flag? res : 0; 
    
}