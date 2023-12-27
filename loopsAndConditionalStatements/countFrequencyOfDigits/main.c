/* 
Write a C program to count frequency of digits in a given number. 
How to find frequency of digits in a given number using loop in C programming.
Logic to find total occurrences of each digits in a given number in C program..

input: Input any number: 116540

output:
Frequency of 0 = 1 
Frequency of 1 = 2 
Frequency of 2 = 0 
Frequency of 3 = 0 
Frequency of 4 = 1 
Frequency of 5 = 1 
Frequency of 6 = 1 
Frequency of 7 = 0 
Frequency of 8 = 0 
Frequency of 9 = 0
*/

#include  <stdio.h>
int main(void)
{
    int array[10] = {0}, number,i;
    printf("Enter Number: ");
    scanf("%d", &number);
    while(number > 0)
    {
        array[number%10]++;
        number /= 10;
    }
    for(i=0; i<10; i++)
    {
        printf("Frequency of %d = %d \n",i,array[i]);
    }


    return 0;
}