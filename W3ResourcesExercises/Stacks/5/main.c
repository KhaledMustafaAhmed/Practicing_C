/*  
5. Write a C program to implement two stacks in a single array and performs push and pop operations for both stacks.
Expected Output:

Elements in Stack-1 are: 50 40 30 10 
Elements in Stack-2 are: 70 60 50 40 20 
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXSIZE  10 

typedef struct _stack{
int top1;
int top2;
int stackElements[MAXSIZE];
}_stack;

void CreateStack(_stack * stackptr)
{
    stackptr->top1 = 0;
    stackptr->top2 = MAXSIZE-1;
}

void pushIntoStack1(_stack * stackptr, int data)
{
    if(stackptr->top1 <= stackptr->top2 && stackptr->top1 < MAXSIZE)
    {
        stackptr->stackElements[stackptr->top1] = data;
        stackptr->top1++;
    }
    else
    {
        printf(" stack is full \n ");
    }
}

void displayStack1(_stack * stackptr)
{
    int i=0; 
    for(; i < stackptr->top1; i++)
    {
        printf(" %d ", stackptr->stackElements[i]);
    }
}
void pushIntoStack2(_stack * stackptr, int data)
{
    if(stackptr->top2 >= stackptr->top1 && stackptr->top2 >= 0)
    {
        stackptr->stackElements[stackptr->top2] = data;
        stackptr->top2--;
    }
    else
    {
        printf(" stack is full \n ");
    }
}

void displayStack2(_stack * stackptr)
{
    int i=MAXSIZE-1; 
    for(; i > stackptr->top2; i--)
    {
        printf(" %d ", stackptr->stackElements[i]);
    }
}

int main(void)
{
    _stack stack;
    CreateStack(&stack);
    pushIntoStack1(&stack, 1);
    pushIntoStack1(&stack, 3);
    pushIntoStack1(&stack, 5);
    pushIntoStack1(&stack, 7);
    pushIntoStack2(&stack, 2);
    pushIntoStack2(&stack, 4);
    pushIntoStack2(&stack, 6);
    printf(" Display stack1 : \n ");
    displayStack1(&stack);
    printf(" \n ");
    printf(" Display stack2 : \n ");
    displayStack2(&stack);

    return 0;
}