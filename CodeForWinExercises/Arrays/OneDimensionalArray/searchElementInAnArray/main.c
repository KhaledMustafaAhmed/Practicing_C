/* 
Write a C program to input elements in array and search whether an element exists in array or not. 
How to search element in array linearly in C programming. 
Logic to search element in array sequentially in C program

Input size of array: 10
Input elements in array: 10, 12, 20, 25, 13, 10, 9, 40, 60, 5

Output: 
Element to search is: 25
Element found at index 3

*/
#include <stdio.h>
#include <limits.h>
#define SIZE   10
int main(void)
{
    int arrar[SIZE];
    int index,searchElement, found = 0;

    printf("Array Elements: ");
    for(index = 0; index < SIZE; index++)
    {
        scanf("%d,", &arrar[index]);
    }
    printf("Element you want: ");
    scanf("%d", &searchElement);

    for(index = 0; index < SIZE; index++)
    {
        if(arrar[index] == searchElement)
        {
            found = 1;
            break;
        }
    }
    if(found)
    {
        printf("%d in a position %d: ", searchElement, index+1);
    }
    else
    {
        printf("Element not found");
    }
   
    return 0;
}