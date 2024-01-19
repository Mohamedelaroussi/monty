#include "monty.h"

/**
 * f_push - function adding node to stack
 * @stack: pointing node to stack
 * @count: line number
 * Return: no return
 */

void f_push(stack_t **stack, unsigned int count)
{
	int x, y = 0, flag = 0;

	if (bus.argum)
	{
		if (bus.argum[0] == '-')
			y++;
		for (; bus.argum[y] != '\0'; y++)
		{
			if (bus.argum[y] > 57 || bus.argum[y] < 48)
				flag = 1; }
		if (flag == 1)
		{ fprintf(stderr, "L%d: usage: push integer\n", count);
			fclose(bus.file);
			free(bus.content);
			free_stack(*stack);
			exit(EXIT_FAILURE); }}
	else
	{ fprintf(stderr, "L%d: usage: push integer\n", count);
		fclose(bus.file);
		free(bus.content);
		free_stack(*stack);
		exit(EXIT_FAILURE); }
	x = atoi(bus.argum);
	if (bus.lifi == 0)
		addnode(stack, x);
	else
		addqueue(stack, x);
}
