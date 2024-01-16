/* 
Write a C program to find total number of vowels and consonants in a string using loop and if else. 
How to find total number of vowels and consonants in a string using switch case in C programming. 
Logic to count number of vowels and consonants in a string.

Input string: I love Codeforwin.



Total Vowels = 7
Total Consonants = 8




*/

#include <stdio.h>
#define  MAX_SIZE   100

void main(void){
    char stringOne[MAX_SIZE];
    char *ptr = stringOne;
    int vowels = 0 , consonants = 0;
   printf("input first string: ");
   gets(stringOne) ;
   while(*ptr)
   {
    if(*ptr=='a' || *ptr=='e' || *ptr=='i' || *ptr=='o' || *ptr=='u' || *ptr=='A' || *ptr=='E' || *ptr=='I' || *ptr=='O' || *ptr=='U')
    {
        vowels++;
    }
    else if(*ptr >= 'A' && *ptr <= 'Z' || *ptr >= 'a' && *ptr <= 'z')
    {
        consonants++;
        
    }
    
    ptr++;
   }
   printf("vowels    consonants \n");
   printf("%6d    %6d", vowels , consonants  );
   
    
}
