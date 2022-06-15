#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "monty.h"

/**
 * _mul - divides the next top value by the top value
 * @stack: stack
 * @line_cnt: line counter
 * Return: void
 */
void _mul(stack_t **stack, unsigned int line_cnt)
{
	int result;

	if (!stack || !*stack || !((*stack)->next))
	{
		fprintf(stderr, "L%d: can't mul, stack too short\n", line_cnt);
		exit(EXIT_FAILURE);
		return;
	}

	result = ((*stack)->next->n) * ((*stack)->n);
	pop(stack, line_cnt);
	(*stack)->n = result;
}


