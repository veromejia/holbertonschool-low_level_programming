#include "lists.h"

/**
 * free_dlistint - free memory
 * @head: the beginning of hte list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *ptr;

	if (head == NULL)
		return;
	while (head->next)
	{
		ptr = head->next;
		free(head);
		head = ptr;
	}
		free(head);
}
