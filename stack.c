#include "stack.h"
#include <stdlib.h>
#include <stdio.h>

stack* initialize_stack() {
    stack* s = malloc(sizeof(stack));
    s->head = NULL;
    
    printf("Stack initialized\n");

    return(s);
}

void push(stack *s, int x) {
    printf("Push function called");

    node* p = s->head;
    
    while (p->next != NULL)
    {
        printf("Next != NULL\n");
        p = p->next;
    }
    printf("Found last note\n");
    node* q = malloc(sizeof(node));

    q->value    = x;
    q->next     = NULL;
    p->next     = q;

    printf("Pushed %d onto stack\n", x);

    return;
}