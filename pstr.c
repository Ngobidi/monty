#include "monty.h"
/**
 * f_pstr - display the str starting at the top of the stack, then \n
 * @head: pointer to the stack_head
 * @counter: values
 * Return: void
*/
void f_pstr(stack_t **head, unsigned int counter)
{
	stack_t *z;
	(void)counter;

	z = *head;
	while (z)
	{
		if (z->n > 127 || z->n <= 0)
		{
			break;
		}
		printf("%c", z->n);
		z = z->next;
	}
	printf("\n");
}
