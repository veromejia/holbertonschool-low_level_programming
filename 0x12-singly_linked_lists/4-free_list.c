#include "lists.h"

/**
 * free_list - free memory
 * @head: the beginning of hte list
 */
void free_list(list_t *head)
{
	if (head == NULL)
	{
		if (head == NULL)
			return;
		free_list(head->next);
		free(head->str);
		free(head);
	}
}
