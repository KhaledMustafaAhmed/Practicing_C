/* 
1. Write a C program to implement a stack using an array with push and pop operations.
Expected Output:
Elements in the stack are: 3 5 4 3 2 1 
*/

#include <stdio.h>
#include <stdlib.h>

#define MAXSTACK   100
typedef struct stack{
int top;
int StackElements[MAXSTACK];
}Stack_t;

void CreateStack(Stack_t *stack)
{
    stack->top = 0;
}
void PushStack(int data,Stack_t *stack)
{
    if(stack->top >= MAXSTACK)
        printf("Stack overflow");
    else       
        stack->StackElements[stack->top++] = data;
}

int popStack(Stack_t *stack)
{
    if(stack->top <= 0)
    {
        printf("Stack is empty");
        return -1;
    }
    else
    {
        stack->top--;
        int data = stack->StackElements[stack->top];
        return data;
    }
}

int main(void)
{
    Stack_t s;
    CreateStack(&s);
    printf("Enter Elements in Stack: ");
    PushStack(1, &s);
    PushStack(2, &s);
    PushStack(3, &s);
    PushStack(4, &s);
    PushStack(5, &s);
    while(s.top != 0)
        printf("%d ", popStack(&s));
    return 0;
}