#include "stack.h"
#include <stdlib.h>
#include <stdio.h>

/* Function returning a stack pointer */
stack* initialize_stack()
{
    stack* s = malloc(sizeof(stack));
    s->head = NULL;
    s->size = 0;
    
    printf("Stack initialized\n");

    return(s);
}

/* Pushes integer onto stack */
void push(stack *s, int x)
{
    printf("Push function called\n");

    node* p = malloc(sizeof(node));
    p->value = x;

    if (s->size == 0) // Stack empty
    {
        p->next = NULL;
    }

    else
    {
        p->next = s->head;
    }

    s->head = p;
    s->size++;

    return;
}