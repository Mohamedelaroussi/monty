#include "monty.h"
/**
* execute - executing opcode functions
* @stack: head linked list to stack
* @count: line_number
* @file: pointing to monty file
* @content: line content
* Return: no return
*/
int execute(char *content, stack_t **stack, unsigned int count, FILE *file)
{
	instruction_t opst[] = {
				{"push", f_push}, {"pall", f_pall}, {"pint", f_pint},
				{"pop", f_pop},
				{"swap", f_swap},
				{"add", f_add},
				{"nop", f_nop},
				{"queue", f_queue},
				{"stack", f_stack},
				{NULL, NULL}
				};
	unsigned int x = 0;
	char *op;

	op = strtok(content, " \n\t");
	if (op && op[0] == '#')
		return (0);
	bus.argum = strtok(NULL, " \n\t");
	while (opst[x].opcode && op)
	{
		if (strcmp(op, opst[x].opcode) == 0)
		{	opst[x].f(stack, count);
			return (0);
		}
		x++;
	}
	if (op && opst[x].opcode == NULL)
	{ fprintf(stderr, "L%d: unknown instruction %s\n", count, op);
		fclose(file);
		free(content);
		free_stack(*stack);
		exit(EXIT_FAILURE); }
	return (1);
}
