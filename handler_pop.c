#include "monty.h"
#include "func_list.h"

/**
 * pop_handler - handles the pop instruction
 * @stack: double pointer to the stack to push to
 * @line_number: number of the line in the file
 */
void pop_handler(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = *stack;

	if (!temp)
	{
		dprintf(STDERR_FILENO, POP_FAIL, line_number);
		free_all(1);
		exit(EXIT_FAILURE);
	}

	delete_dnodeint_at_index(stack, 0);
}

