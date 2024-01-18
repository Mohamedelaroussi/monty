#include "monty.h"

/**
 * f_push - function adding node to stack
 * @node: pointing node to stack
 * @count: line number
 * Return: no return
 */

void f_push(stack_t **node, unsigned int numero)
{
	int x, y = 0, flag = 0;

	if (car.argum)
	{
		if (car.argum[0] == '-')
			y++;
		for (; car.argum[y] != '\0'; y++)
		{
			if (car.argum[y] > 57 || car.argum[y] < 48)
				flag = 1; }
		if (flag == 1)
		{ fprintf(stderr, "L%d: usage: push integer\n", count);
			fclose(car.file);
			free(car.content);
			free_stack(*node);
			exit(EXIT_FAILURE); }}
	else
	{ fprintf(stderr, "L%d: usage: push integer\n", count);
		fclose(car.file);
		free(car.content);
		free_stack(*node);
		exit(EXIT_FAILURE); }
	i = atoi(car.argum);
	if (car.lifi == 0)
		addnode(node, x);
	else
		addqueue(node, x);
}
