#include "lists.h"
/**
 * free_listint2 - free memory
 * @head: first node of the list
 */

void free_listint2(listint_t **head)
{
	listint_t *ptr;

	if (head == NULL || (*head) == NULL)
		return;
	while ((*head)->next != NULL)
	{
		ptr = (*head)->next;
		free(*head);
		(*head) = ptr;
	}
		free(*head);
		*head = NULL;
}
