#ifndef __STACK_H_
#define __STACK_H_

#include <stdbool.h>

/* Node struct singly linked list */
typedef struct node
{
   int value;
   struct node* next;
} node;

/* Stack head struct */
typedef struct stack
{
    int size;
    node* head;
} stack;

stack* initialize_stack();
void push(stack *s, int x);

#endif // __STACK_H_