#ifndef __STACK_H_
#define __STACK_H_

#include <stdbool.h>

/* Node struct singly linked list */
typedef struct node
{
   char value[50];
   struct node* next;
} node;

/* Stack head struct */
typedef struct stack
{
    int size;
    node* head;
} stack;

stack* initialize_stack();
void push(stack *s, char x[], int arraySize);
char* pop(stack *s);

#endif // __STACK_H_