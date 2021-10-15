#include "interface.h"
#include <stdio.h>
#include <stdlib.h>

void print_stack(stack *s)
{
    if (s->head == NULL)
    {
        printf("Stack is empty\n");
    }

    else
    {
        int *stack_array = (int *)malloc(sizeof(int) * s->size);
        node *p = s->head;

        for (int i = 0; i < s->size; i++)
        {
            stack_array[i] = p->value;
            p = p->next;
        }

        for (int i = s->size - 1; i >= 0; i--)
        {
            printf("%d ", stack_array[i]);
        }
        
        printf("\n");
    }

    return;
}