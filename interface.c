#include "interface.h"
#include <stdio.h>

void print_stack(stack* s) {
    node* p = s->head;
    while (p->next != NULL)
    {
        printf("%d ", p->value);
        p = p->next;
    }
    printf("%d\n", p->value);

    return;    
}