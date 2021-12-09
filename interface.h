#ifndef __INTERFACE_H_
#define __INTERFACE_H_

#include "stack.h"
#include "arithmetic.h"

#define ARRAY_LENGTH 50

struct string_array {
    char a[ARRAY_LENGTH][ARRAY_LENGTH];
};

void print_stack(stack* s);
void user_input(stack* s);
void parse_input(stack* s, char input[]);
struct string_array explode(char input[]);
void print_exploded_string(struct string_array input);

#endif // __INTERFACE_H_