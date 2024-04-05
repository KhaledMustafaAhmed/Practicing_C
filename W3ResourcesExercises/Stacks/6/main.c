/*  
6. Write a C program to sort a given stack using another stack.
Expected Output:

Original stack: 1 5 5 2 3 8 
Sorted stack: 1 2 3 5 5 8 
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXSIZE   10

typedef struct _stack{
int top;
int stackElements[MAXSIZE];
}_stack;

typedef struct _sortedStack{
int Sortedtop;
int SortedstackElements[MAXSIZE];
}_sortedStack;

void createStack(_stack *stackptr)
{
    stackptr->top = 0;
}
void createSortedStack(_sortedStack *stackptr)
{
    stackptr->Sortedtop = -1;
}
void pushStack(_stack *stackptr, int data)
{
    if(stackptr->top >= MAXSIZE)
    {
        printf(" stack overflow \n");
    }
    else
    {
        stackptr->stackElements[stackptr->top] = data;
        stackptr->top++;
    }
}
int popStack(_stack *stackptr)
{
    if(stackptr->top == 0)
    {
        printf(" stack is empty \n");
        return -1;
    }
    else
    {
        int data;
        stackptr->top--;
        data = stackptr->stackElements[stackptr->top];
        return data;
    }
}

void pushSortedStack(_sortedStack * SortedStackptr, _stack *stackptr)
{
    int temp;
    while(stackptr->top > 0)
    {
        temp = popStack(stackptr);
        while(SortedStackptr->Sortedtop >= 0 && SortedStackptr->SortedstackElements[SortedStackptr->Sortedtop] < temp)
        {
            pushStack(stackptr, SortedStackptr->SortedstackElements[SortedStackptr->Sortedtop]);
            SortedStackptr->Sortedtop--;
        }
        SortedStackptr->Sortedtop++;
        SortedStackptr->SortedstackElements[SortedStackptr->Sortedtop] = temp;
    }

    while(SortedStackptr->Sortedtop >= 0)
    {
        pushStack(stackptr, SortedStackptr->SortedstackElements[SortedStackptr->Sortedtop]);
        SortedStackptr->Sortedtop--;
    }
}

int main(void)
{
    _stack stack;
    _sortedStack sortedstack;
    createStack(&stack);
    createSortedStack(&sortedstack);
    printf(" Push data \n ");
    pushStack(&stack, 1);
    pushStack(&stack, 5);
    pushStack(&stack, 5);
    pushStack(&stack, 2);
    pushStack(&stack, 3);
    pushStack(&stack, 8);

     // Print original stack elements
    printf("Original stack: ");
    for (int i = 0; i < stack.top; i++) {
        printf("%d ", stack.stackElements[i]);
    }
    printf("\n");

    // Sort the original stack
    pushSortedStack(&sortedstack,&stack);

    // Print sorted stack elements
    printf("Sorted stack: ");
    for (int i = 0; i < stack.top; i++) {
        printf("%d ", stack.stackElements[i]);
    }
    printf("\n");


    return 0;
}