/*  
2. Write a C program to implement a stack using a singly linked list.
Expected Output:

 Push data 1
 Push data 2
 Push data 3
 Push data 4

 Pop data: 4
 Pop data: 3
 Pop data: 2
 Pop data: 1

 Check a stack is empty or not?
 Stack is empty!
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct _stackNode{
int data;
struct _stackNode * next;
}_stackNode;

typedef struct stack{
_stackNode *top;
int size;
}_stack_t;

_stackNode *newNode(int data)
{
    _stackNode * node = (_stackNode *)malloc(sizeof(_stackNode));
    node->data = data;
    node->next = NULL;
    return node;
}

_stack_t* createStack()
{
    _stack_t* stack = (_stack_t*)malloc(sizeof(_stack_t));
    stack->top =NULL;
     stack->size =0;
     return stack;
}

int isEmpty(_stack_t* stack)
{
    return (!stack->top);
}

void PushStack(_stack_t* stack, int data)
{
    printf("PushStack: \n");
    _stackNode *node = newNode(data);
    node->next = stack->top; 
    stack->top = node;
}

int popStack(_stack_t *stack)
{
    if(isEmpty(stack))
    {
        printf("Error poped \n");
        return -1;
    }
    else
    {
        _stackNode *ptr = stack->top;
        int data = ptr->data;
        stack->top = ptr->next;
        free(ptr);
        return data;
    }
}

int main(void)
{
   _stack_t *s = createStack();
   PushStack(s, 5);
   PushStack(s, 3);
   PushStack(s, 2);
   PushStack(s, 6);

   printf("pop data from stack: %d\n", popStack(s));
   printf("pop data from stack: %d\n", popStack(s));
   printf("pop data from stack: %d\n", popStack(s));
   printf("pop data from stack: %d\n", popStack(s));
   printf("pop data from stack: %d\n", popStack(s));

   printf("Check if stack is empty: \n");
   if(isEmpty(s))
   {
    printf("Stack is empty");
   }
   else
   {
    printf("Stack is not empty");
   }

    return 0;
}