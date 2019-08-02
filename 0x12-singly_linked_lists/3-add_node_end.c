#include "lists.h"
/**
 * add_node_end - creates a node and adds it to a linked list
 * @head: poter to head of the linked list
 * @str: string to assigned to the node
 * Return: Pointer to the head of the linked list
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *last;

	if (head == NULL || str == NULL)
		return (NULL);

	new = malloc(sizeof(list_t));
	last = malloc(sizeof(list_t));
	new->str = strdup(str);
	new->len = _strlen(str);


	if (*head == NULL)
	{
		new->next = NULL;
		*head = new;
		last = *head;
	}
	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = new;
		new->next = NULL;
	}
	return (*head);
}
/**
 *_strlen -functions that return lenght of an string
 * @s: string
 * Return: the lenght of the string
 */
int _strlen(const char *s)
{
	int i;

	for (i = 0; s[i]; i++)
		;
	return (i);
}
