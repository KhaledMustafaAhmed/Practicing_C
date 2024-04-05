/*  
4. Write a C program that accepts a string and reverse it using a stack.
Expected Output:

Input a string: w3resource
 Reversed string using a stack is: ecruoser3w
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXSIZE   100

typedef struct _stack{
int top;
char stackElements[MAXSIZE];
}_stack;

void createStack(_stack *stackptr)
{
    stackptr->top = 0;
}

void push(_stack *stackptr, char data)
{
    stackptr->stackElements[stackptr->top] = data;
    stackptr->top++;
}
char pop(_stack *stackptr)
{
    if(stackptr->top <= -1)
    {
        printf(" Stack is empty ");
    }
    else
    {
        stackptr->top--;
        char data = stackptr->stackElements[stackptr->top];
        return data;
    }
}
int ifFull(_stack *stackptr)
{
    return stackptr->top>=MAXSIZE? 1 : 0;
}
void reverseString(_stack *stackptr ,char *string)
{
    int len = strlen(string);int i;
    for(i=0; i<len; i++)
    {
        push(stackptr,string[i]);
    }
    for(i=0; i<len; i++)
    {
        string[i] = pop(stackptr);
    }
}
int main(void)
{
    _stack stack;
    createStack(&stack);
    char name[MAXSIZE], i;
    printf("Enter string name: ");
    scanf("%s", &name);
    printf("String before reverse: %s\n", name);
    reverseString(&stack, name);
    printf("String after reverse: %s\n", name);



    return 0;
}