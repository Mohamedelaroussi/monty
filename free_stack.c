#include "monty.h"
/**
* free_stack - freesing doubly linked list
* @stack: pointing to head stack
*/
void free_stack(stack_t *stack)
{
	stack_t *aux;

	aux = stack;
	while (stack)
	{
		aux = stack->next;
		free(stack);
		stack = aux;
	}
}
