#include "monty.h"

/**
 * f_pop - printing the top
 * @stack: pointing node to stack head
 * @count: number
 * Return: no return
*/
void f_pop(stack_t **stack, unsigned int count)
{
	stack_t *curent;

	if (*stack == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", count);
		fclose(car.file);
		free(car.content);
		free_stack(*stack);
		exit(EXIT_FAILURE);
	}
	curent = *stack;
	*stack = curent->next;
	free(curent);
}