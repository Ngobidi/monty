#include "monty.h"
/**
* free_stack - empty a doubly linked list
* @head: pointer to the head_stack
*/
void free_stack(stack_t *head)
{
	stack_t *aux;

	aux = head;
	while (head)
	{
		aux = head->next;
		free(head);
		head = aux;
	}
}
