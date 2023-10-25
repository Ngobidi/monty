#include "monty.h"
/**
 * f_pall - display the stack
 * @head: pointer to the stack_head
 * @counter: domant
 * Return: void
*/
void f_pall(stack_t **head, unsigned int counter)
{
	stack_t *z;
	(void)counter;

	z = *head;
	if (z == NULL)
		return;
	while (z)
	{
		printf("%d\n", z->n);
		z = z->next;
	}
}
