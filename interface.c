#include "interface.h"
#include <stdio.h>
#include <stdlib.h>

/*  
    Prints the stack
    Appends whole stack to array, then prints in reverse order
*/
// void print_stack(stack *s)
// {
//     if (s->size == 0) // Stack empty
//     {
//         printf("Stack is empty\n");
//     }

//     else
//     {
//         /* Allocates array for linked list values */
//         int *stack_array = (int *)malloc(sizeof(int) * s->size);
//         node *p = s->head;

//         /* Iterates through each node saving in array */
//         for (int i = 0; i < s->size; i++)
//         {
//             stack_array[i] = p->value;
//             p = p->next;
//         }

//         /* Prints array in reverse order */
//         for (int i = s->size - 1; i >= 0; i--)
//         {
//             printf("%d ", stack_array[i]);
//         }
        
//         printf("\n");
//     }

<<<<<<< HEAD
//     return;
// }

/* Function for decoding user input */

// Make this function take string input
void user_input(stack* s)
{
    char input[50];
    printf("Please insert command:\n");
    scanf("%s", input);
}

void parse_input(stack* s, char input[])
{

}
=======
    return;
}
/* Function for decoding user input */

>>>>>>> 79905e4067febd7991f5b88cc3e7649d48c4e544
