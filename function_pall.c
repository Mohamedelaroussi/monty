#include "monty.h"

/**
 * f_pall - printing stack
 * @stack: pointing node to stack head
 * @count: number (no used)
 * Return: no return
 */
void f_pall(stack_t **stack, unsigned int count)
{
	stack_t *s;
	(void)count;

	s = *stack;
	if (s == NULL)
		return;

	while (s)
	{
		printf("%d\n", s->n);
		s = s->next;
	}
}
