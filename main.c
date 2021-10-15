#include "stack.h"
#include "interface.h"
#include <stdio.h>

/* Sandboxing function */
void main()
{
    stack* s = initialize_stack();
    push(s, 1);
    push(s, 2);
    push(s, 3);
    print_stack(s);
    int x = pop(s);
    printf("The value popped is: %d.\n", x);
    print_stack(s);
}