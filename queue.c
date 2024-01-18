#include "monty.h"
/**
 * f_queue - printing the top
 * @stack: stack head
 * @count: line_number
 * Return: no return
*/
void f_queue(stack_t **stack, unsigned int count)
{
	(void)stack;
	(void)count;
	car.lifi = 1;
}

/**
 * addqueue - adding node to tail stack
 * @n: new_value
 * @stack: head of stack
 * Return: no return
*/
void addqueue(stack_t **stack, int n)
{
	stack_t *new_node, *aux;

	aux = *stack;
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		printf("Error\n");
	}
	new_node->n = n;
	new_node->next = NULL;
	if (aux)
	{
		while (aux->next)
			aux = aux->next;
	}
	if (!aux)
	{
		*stack = new_node;
		new_node->prev = NULL;
	}
	else
	{
		aux->next = new_node;
		new_node->prev = aux;
	}
}
