/*  
3. Write a C program to check a stack is full or not using an array with push and pop operations.
Expected Output:

Stack size: 3
Original Stack: 1 2 3 
Push another value and check if the stack is full or not!
Stack is full!

Stack size: 3
Original Stack: 10 20 
Check the said stack is full or not!
Stack is not full!
*/

#include <stdio.h>
#include <stdlib.h>

#define MAXSTACK   3

typedef struct _stack{
int top;
int StackElements[MAXSTACK];
}_stack;

void createStack(_stack *stackptr)
{
    stackptr->top = 0;
}

void push(_stack *stackptr, int data)
{
    stackptr->StackElements[stackptr->top] = data;
    stackptr->top++;
}

void pop(_stack *stackptr, int *data)
{
    stackptr->top--;
    *data = stackptr->StackElements[stackptr->top];
}
void display(_stack *stackptr)
{
    int i= stackptr->top-1;
    while(i >=0)
    {
        printf("%d ", stackptr->StackElements[i]);
        i--;
    }
}
int main(void)
{
    _stack stack;
    createStack(&stack);
    push(&stack, 1);
    push(&stack, 2);
    printf("stack size: %d \n",MAXSTACK);
    printf("original stack: \n");
    display(&stack);
    printf("\n");
    printf("push another value in stack and check if it full or not \n");
    if(stack.top >= MAXSTACK)
    {
        printf("stack overflow");
    }
    else
    {
        printf("data pushed");
    }

    return 0;
}