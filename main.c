#include "stack.h"
#include "interface.h"
#include "arithmetic.h"
#include <stdio.h>

/* Sandboxing function */
void main()
{
    stack *s = initialize_stack();
    user_input(s);
}