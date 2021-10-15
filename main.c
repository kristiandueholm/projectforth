#include "stack.h"
#include "interface.h"

void main() {
    stack* s = initialize_stack();
    push(s, 1);
    push(s, 2);
    push(s, 3);
    print_stack(s);
}