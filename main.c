#include <stdio.h>

void main() {
    int stack[100] = {0};

    while (1)
    {
        int command;
        printf("0: Exit\n1: Push to stack\n");
        printf("Choose command\n");
        scanf_s("%d", &command);

        switch (command)
        {
        case 0:
            abort();
        
        case 1:
            int x;
            printf("Insert number");
            scanf_s("%d", &x);

        
        default:
            break;
        }
    }
    
}