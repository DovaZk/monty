#include "monty.h"

/**
* pint_func - print the value at the top of the stack
* @stack: pointer to the head of the stack
* @line_number: number of the line of the opcode
*/

void pint_func(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp = *stack;

	if (stack == NULL || *stack == NULL)
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", line_number);
		free(globv.buffer);
		fclose(globv.fptr);
		free_stack(globv.head);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", tmp->n);
}
