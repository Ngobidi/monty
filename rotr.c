#include "monty.h"
/**
  *f_rotr- rotates the stack to the bottom
  *@head: pointer to the stack_head
  *@counter: values
  *Return: void
 */
void f_rotr(stack_t **head, __attribute__((unused)) unsigned int counter)
{
	stack_t *dublicate;

	dublicate = *head;
	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	while (dublicate->next)
	{
		dublicate = dublicate->next;
	}
	dublicate->next = *head;
	dublicate->prev->next = NULL;
	dublicate->prev = NULL;
	(*head)->prev = dublicate;
	(*head) = dublicate;
}
