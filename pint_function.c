#include "monty.h"

/**
 * f_pint - printing the top
 * @stack: pointing node to stack head
 * @count: line_number
 * Return: no return
*/
void f_pint(stack_t **stack, unsigned int count)
{
	if (*stack == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", count);
		fclose(car.file);
		free(car.content);
		free_stack(*stack);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*stack)->n);
}
