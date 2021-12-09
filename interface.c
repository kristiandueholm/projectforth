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
    char input[ARRAY_LENGTH];
    printf("Please insert command:\n");
    fgets(input, ARRAY_LENGTH, stdin);
    parse_input(s, input);
}

/* Parses input from user_input */
void parse_input(stack* s, char input[])
{
    struct string_array explodedInput = explode(input);

    // Checks exploded input and pushes integers
    for (int i = 0; i < ARRAY_LENGTH; i++)
    {
        // Stop parsing if row starts with terminator
        if (explodedInput.a[i][0] == '\0')
        {
            break;
        }

        // Row of integers
        else if((explodedInput.a[i][0] >= '0') && (explodedInput.a[i][0] <= '9'))
            {
                char tempRow[50];
                for (int j = 0; j < ARRAY_LENGTH; j++)
                {
                    tempRow[j] = explodedInput.a[i][j];
                }
                int integerRow = atoi(tempRow);
                printf("%d\n", integerRow);
            }
        
        // Row doesn't start with number
        else {
            for (int j = 0; j < ARRAY_LENGTH; j++)
            {
                if (explodedInput.a[i][j] == '\0')
                {
                    break;
                }
            }
        }
    }
}

/* Divides strings out into two dimensional char array */
/*
2D array 
|H|E|L|L|O|'\0'||||
|W|O|R|L|D|'\0'||||
|'\0'|||||||||
|||||||||||
*/
struct string_array explode(char input[])
{
    
    struct string_array output;
    int m = 0;
    int n = 0;

    for (int i = 0; i < ARRAY_LENGTH; i++)
    {
        switch (input[i])
        {
        case ' ':
            output.a[m][n] = '\0';
            m++;
            n = 0;
            break;
        
        default:
            output.a[m][n] = input[i];
            n++;
            break;
        }
        
        if (input[i] == '\0')
        {
            m++;
            n = 0;
            output.a[m][n] = '\0';
            break;
        }
    }

    return output;
}

/* Prints string in exploded format */
void print_exploded_string(struct string_array input) {
    for (int i = 0; i < ARRAY_LENGTH; i++)
    {
        if (input.a[i][0] == '\0')
        {
            break;
        }
        
        for (int j = 0; j < ARRAY_LENGTH; j++)
        {
            if (input.a[i][j] == '\0')
            {
                printf("\n");
                break;
            }
            
            else {
                printf("%c ", input.a[i][j]);
            }
        }
    }
}