#include "lists.h"

/**
 * free_list - free memory
 * @head: the beginning of hte list
 */
void free_list(list_t *head)
{
	list_t *ptr;

	if (head == NULL)
		return;
	while (head->next != NULL)
	{
		ptr = head->next;
		free(head->str);
		free(head);
		head = ptr;
	}
		free(head->str);
		free(head);
}
