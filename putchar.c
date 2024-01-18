#include "monty.h"
/**
 * f_pchar - printing character at top of stack
 * followed by new line
 * @stack: pointing to stack head
 * @count: line_number
 * Return: no return
*/
void f_pchar(stack_t **stack, unsigned int count)
{
	stack_t *s;

	s = *stack;
	if (!s)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", count);
		fclose(car.file);
		free(car.content);
		free_stack(*stack);
		exit(EXIT_FAILURE);
	}
	if (s->n > 127 || s->n < 0)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", count);
		fclose(car.file);
		free(car.content);
		free_stack(*stack);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", s->n);
}
