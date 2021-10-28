#include "interface.h"
#include <stdio.h>
#include <stdlib.h>

/*  
    Prints the stack
    Appends whole stack to array, then prints in reverse order
*/
void print_stack(stack *s)
{
    if (s->size == 0) // Stack empty
    {
        printf("Stack is empty\n");
    }

    else
    {
        /* Allocates array for linked list values */
        int *stack_array = (int *)malloc(sizeof(int) * s->size);
        node *p = s->head;

        /* Iterates through each node saving in array */
        for (int i = 0; i < s->size; i++)
        {
            stack_array[i] = p->value;
            p = p->next;
        }

        /* Prints array in reverse order */
        for (int i = s->size - 1; i >= 0; i--)
        {
            printf("%d ", stack_array[i]);
        }
        
        printf("\n");
    }

    return;
}
/* Function for decoding user input */

// Make this function take string input
void user_input(stack *s)
{
    char input[20]; // Char array for input

    // Set each index to 0 (initialize)
    for (int i = 0; i < 20; i++)
    {
        input[i] = 0;
    }

    printf("Please insert command:\n");
    scanf("%s", input); // Read in input and save in array


    for (int i = 0; input[i] != 0; i++)
    {
        int x = (int)input[i];

        switch (input[i])
        {
        case 43: // Plus operation
            printf("Plus function called.\n");
            plus(s);
            break;

        case 45: // Minus operation
            printf("Minus function called.\n");
            minus(s);
            break;
        
        case 32: // Space
            break; // Skips

        default:
            push(s, x);
            break;
        }
    }
    
}