#include "lists.h"
#include <assert.h>
/**
 * get_nodeint_at_index - functions that search a node in n positions
 * @head: fist node of the list
 * @index: n position
 * Return: return a linked list
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int counter = 0;


	while (counter < index)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
		counter++;
	}
	return (head);

}
