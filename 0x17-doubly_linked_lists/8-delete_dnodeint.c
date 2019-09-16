#include "lists.h"

/**
 * delete_dnodeint_at_index - Delete the node in an specific index
 * @head: double linked list
 * @index: given position
 * Return: 1 if successful, -1 otherwise
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *new_node = *head;
	unsigned int i;

	if (!head || !(*head))
		return (-1);

	if (index == 0)
	{
		*head = new_node->next;
		if (new_node->next != NULL)
			(*head)->prev = NULL;
		free(new_node);
		return (1);
	}
	for (i = 0; new_node != NULL; i++)
	{
		if (i == index)
		{
			if (new_node->next != NULL)
				new_node->next->prev = new_node->prev;
			if (new_node->prev != NULL)
				new_node->prev->next = new_node->next;
			free(new_node);
			return (1);
		}
		new_node = new_node->next;
	}
	return (-1);
}
