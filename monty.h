#ifndef _MONTY_H_
#define _MONTY_H_

#define _XOPEN_SOURCE 700

/* Libraries */
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/* Declaration of the global variables */
extern int token;

/* Structures */

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct instruction_s
{
	char *opcode;
	stack_t *(*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

#define USAGE "USAGE: monty file\n"
#define FILE_ERROR "Error: Can't open file %s\n"
#define UNKNOWN "L%u: unknown instruction %s\n"
#define MALLOC_FAIL "Error: malloc failed\n"
#define PUSH_FAIL "L%u: usage: push integer\n"
#define PINT_FAIL "L%u: can't pint, stack empty\n"
#define POP_FAIL "L%u: can't pop an empty stack\n"
#define SWAP_FAIL "L%u: can't swap, stack too short\n"
#define ADD_FAIL "L%u: can't add, stack too short\n"
#define SUB_FAIL "L%u: can't sub, stack too short\n"
#define DIV_FAIL "L%u: can't div, stack too short\n"
#define DIV_ZERO "L%u: division by zero\n"
#define MUL_FAIL "L%u: can't mul, stack too short\n"
#define MOD_FAIL "L%u: can't mod, stack too short\n"
#define PCHAR_FAIL "L%u: can't pchar, stack empty\n"
#define PCHAR_RANGE "L%u: can't pchar, value out of range\n"

/* Prototypes */
stack_t *push(stack_t **stack, unsigned int line_number);
stack_t *pall(stack_t **stack, unsigned int line_number);
stack_t *pint(stack_t **stack, unsigned int line_number);
stack_t *pop(stack_t **stack, unsigned int line_number);
stack_t *swap(stack_t **stack, unsigned int line_number);
void free_stack(stack_t **stack);
stack_t *(*op_func(char *s, stack_t **stack,
		   unsigned int line_number))(stack_t **stack,
					      unsigned int line_number);
stack_t *add(stack_t **stack, unsigned int line_number);
stack_t *sub(stack_t **stack, unsigned int line_number);
stack_t *nop(stack_t **stack, unsigned int line_number);
stack_t *mod(stack_t **stack, unsigned int line_number);
stack_t *div_op(stack_t **stack, unsigned int line_number);
stack_t *mul_op(stack_t **stack, unsigned int line_num);
stack_t *pchar(stack_t **stack, unsigned int line_num);
stack_t *pstr(stack_t **stack, unsigned int line_number);
stack_t *rotl(stack_t **stack, unsigned int line_number);

#endif /* _MONTY_H_ */
