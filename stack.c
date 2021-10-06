#include "stack.h"

int findIndex(int* a[]) {
    // Find biggest index, non-zero in array
}

int stackPop(int* a[]) {
    // Pops last item in stack, returns value of popped int
}

void stackPush(int x, int *a[]) {
    int index = findIndex(&a);
    *a[index+1] = x;
    return;
}