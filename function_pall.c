#include "monty.h"

/**
 * f_pall - printing stack
 * @node: pointing node to stack head
 * @count: number (no used)
 * Return: no return
 */

void f_pall(stack_t **node, unsigned int count)
{
	stack_t *node;
	(void)count;

	if (node == NULL)
		return;
	while (node)
	{
		printf("%d\n", node->n);
		node = node->next;
	}
}
