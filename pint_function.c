#include "monty.h"

/**
 * f_pint - printing the top
 * @node: pointing node to stack head
 * @count: number
 * Return: no return
*/
void f_pint(stack_t **node, unsigned int count)
{
	if (*node == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", count);
		fclose(car.file);
		free(car.content);
		free_stack(*node);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*node)->n);
}
