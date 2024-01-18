#include "monty.h"

/**
 * f_pall - printing stack
 * @stack: pointing node to stack head
 * @count: number (no used)
 * Return: no return
 */
void f_pall(stack_t **stack, unsigned int count)
{
	(void)count;

	if (*stack == NULL)
		return;

	stack_t *curent = *stack;

	while (curent)
	{
		printf("%d\n", curent->n);
		curent = curent->next;
	}
}
