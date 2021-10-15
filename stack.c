#include "stack.h"
#include <stdlib.h>
#include <stdio.h>

stack* initialize_stack()
{
    stack* s = malloc(sizeof(stack));
    s->head = NULL;
    s->size = 0;
    
    printf("Stack initialized\n");

    return(s);
}

void push(stack *s, int x)
{
    printf("Push function called\n");

    node* p = malloc(sizeof(node));
    p->value = x;

    if (s->head == NULL)
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