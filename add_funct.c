#include "monty.h"
/**
 * f_add - adding top 2 elements of stack
 * @stack: pointing to stack head
 * @count: line_number
 * Return: no return
*/
void f_add(stack_t **stack, unsigned int count)
{
	stack_t *s;
	int len = 0, aux;

	s = *stack;
	while (s)
	{
		s = s->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", count);
		fclose(car.file);
		free(car.content);
		free_stack(*stack);
		exit(EXIT_FAILURE);
	}
	s = *stack;
	aux = s->n + s->next->n;
	s->next->n = aux;
	*stack = s->next;
	free(s);
}
