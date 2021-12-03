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

char** explode(char input[])
{
    char output[50][50];
    int m = 0;
    int n = 0;

    for (int i = 0; i < 50; i++)
    {
        switch (input[i])
        {
        case ' ':
            output[m][n] = '\0';
            n++;
            m = 0;
            break;
        
        default:
            output[m][n] = input[i];
            m++;
            break;
        }
        
        if (input[i] == '\0')
        {
            output[m][n] = '\0';
            break;
        }
    }

    return output;
}