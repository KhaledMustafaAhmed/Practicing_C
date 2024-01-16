/* 
Write a C program to compare two strings using loop character by character. 
How to compare two strings without using inbuilt library function strcmp() in C programming. 
Comparing two strings lexicographically without using string library functions. How to compare two strings using strcmp() library function.

Input string1: Learn at Codeforwin.
Input string2: Learn at Codeforwin.

Both strings are lexographically equal.


*/

#include <stdio.h>
#define  MAX_SIZE   100
int compare(const char* string1, const char* string2);
void main(void){
    char stringOne[MAX_SIZE], stringTwo[MAX_SIZE];
    int res; 
   printf("input first string: ");
   gets(stringOne)  ;
      printf("input second string: ");
   gets(stringTwo) ;
   res = compare(stringOne, stringTwo);
   if(res == 0 )
   {
    printf("Equal");
   }
   
   else
   {
    printf("not equal");
   }
    
}
int compare(const char* string1, const char* string2)
{
    while((*(string1) && *(string2) ) && (*(string1) == *(string2)))
        {
            string1++;
            string2++;
        } 

        return *string1 - *string2;

}