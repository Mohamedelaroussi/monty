#include "monty.h"
/**
 * f_swap - adding top 2 elements of stack
 * @stack: pointing to stack head
 * @count: line_number
 * Return: no return
*/
void f_swap(stack_t **stack, unsigned int count)
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
		fprintf(stderr, "L%d: can't swap, stack too short\n", count);
		fclose(bus.file);
		free(bus.content);
		free_stack(*stack);
		exit(EXIT_FAILURE);
	}
	s = *stack;
	aux = s->n;
	s->n = s->next->n;
	s->next->n = aux;
}
