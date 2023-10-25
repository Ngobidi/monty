#include "monty.h"
/**
 * f_pchar - display the chars at the top of the stack, then \n
 * @head: pointer to the stack_head
 * @counter: values
 * Return: void
*/
void f_pchar(stack_t **head, unsigned int counter)
{
	stack_t *z;

	z = *head;
	if (!z)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	if (z->n > 127 || z->n < 0)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", z->n);
}
