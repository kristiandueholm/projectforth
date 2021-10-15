#ifndef __STACK_H_
#define __STACK_H_

#include <stdbool.h>

typedef struct node
{
   int value;
   struct node* next;
} node;

typedef struct stack
{
    int size;
    node* head;
} stack;

stack* initialize_stack();
void push(stack *s, int x);

#endif // __STACK_H_