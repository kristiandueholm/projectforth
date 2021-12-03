#include "stack.h"

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
void push(stack *s, char x[])
{
    printf("Push function called.\n");

    node* p = malloc(sizeof(node));

    for (int i = 0; i < 50; i++)
    {
        if (x[i] != '\0')
        {
            p->value[i] = x[i];
        }
        else break;
        
    }

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

char* pop(stack *s)
{
    assert(s->size > 0);
    printf("Pop function called.\n");

    char *x = malloc(sizeof(char) * (50 + 1));
    for (int i = 0; i < 50; i++)
    {
        x[i] = s->head->value[i];
    }
    

    s->head = s->head->next;
    s->size--;

    free(s->head);
    return(x);
}