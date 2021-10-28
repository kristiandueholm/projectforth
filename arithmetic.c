// File for calculating arithmetic operations

#include "arithmetic.h"

void plus(stack *s)
{
    assert(s->size > 1); // Stack size at least 2
    int a = pop(s);
    int b = pop (s);
    push(s, a + b);
    return;
}

// Contains issues calculating negatives
void minus(stack *s)
{
    assert(s->size > 1);
    int a = pop(s);
    int b = pop(s);
    push(s, a - b);
    return;
}