#include "monty.h"
/**
 * f_swap - adds the topmost two elements of the stack.
 * @head: pointer to the stack_head
 * @counter: values
 * Return: void
*/
void f_swap(stack_t **head, unsigned int counter)
{
	stack_t *z;
	int len = 0, aux;

	z = *head;
	while (z)
	{
		z = z->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	z = *head;
	aux = z->n;
	z->n = z->next->n;
	z->next->n = aux;
}
