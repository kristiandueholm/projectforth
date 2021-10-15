#include "stack.h"
#include <stdlib.h>
#include <stdio.h>

stack* initialize_stack() {
    stack* s = malloc(sizeof(stack));
    s->head = NULL;
    s->size = 0;
    
    printf("Stack initialized\n");

    return(s);
}

bool empty_stack(stack* s) {
    if (s->head == NULL)
    {
        return(true);
    }
    return(false);
}

void push(stack *s, int x) {
    printf("Push function called\n");

    node* p = malloc(sizeof(node));
    p->value = x;

    if (empty_stack(s)) {
        p->next = NULL;
    }

    else {
        p->next = s->head;
    }

    s->head = p;
    s->size++;

    return;
}