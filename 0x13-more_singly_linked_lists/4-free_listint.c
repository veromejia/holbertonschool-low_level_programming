#include "lists.h"
/**
 * free_listint - free memory
 * @head: first element of the list
 */

void free_listint(listint_t *head)
{
	listint_t *ptr;

	if (head == NULL)
		return;
	while (head->next != NULL)
	{
		ptr = head->next;
		free(head);
		head = ptr;
	}
		free(head);
}
