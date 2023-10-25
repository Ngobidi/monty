#include "monty.h"
/**
 * f_mod - evaluate the module of the topmost two element of the stacks
 * @head: pointer to the stack_head
 * @counter: value
 * Return: void
*/
void f_mod(stack_t **head, unsigned int counter)
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
		fprintf(stderr, "L%d: can't mod, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	z = *head;
	if (z->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	aux = z->next->n % z->n;
	z->next->n = aux;
	*head = z->next;
	free(z);
}
