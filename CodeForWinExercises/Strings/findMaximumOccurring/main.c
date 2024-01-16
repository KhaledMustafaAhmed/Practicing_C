/* 
Write a C program to find maximum occurring character in a string using loop. 
How to find highest frequency character in a string using loop in C programming. 
Program to find the highest occurring character in a string in C. Logic to find maximum occurring character in a string in C programming.

Input string: I love Codeforwin.


Maximum occurring character: 'o'

*/


#include <stdio.h>
int count(char *string, char c);
#define MAX_SIZE 100 // Maximum string size
#define MAX_CHARS 255
int main()
{
    char stringOne[MAX_SIZE], freq[MAX_CHARS];
    int i,ascii,max;
    printf("input string");
    gets(stringOne);
    for(i = 0; i < MAX_CHARS; i++)
    {
        freq[i] = 0;
    }
    i=0;
    while(stringOne[i] != '\0')
    {
        ascii = (int)stringOne[i];
        freq[ascii] += 1;  
        i++;
    }
    max = 0;
    for(int i = 0; i <MAX_CHARS; i++)
    {
        if(freq[i] > freq[max])
        {
            max = i;
        }
    }
    printf("%c is max occurences %d", max,freq[max]);


    

    return 0;
}
