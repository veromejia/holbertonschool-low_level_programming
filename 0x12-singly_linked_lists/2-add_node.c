#include "lists.h"
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

/**
 * add_node - creates a node and adds it to a linked list
 * @head: poter to head of the linked list
 * @str: string to assigned to the node
 * Return: Pointer to the head of the linked list
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *ptr;

	if (head == NULL || str == NULL)
		return (NULL);
	ptr = malloc(sizeof(list_t));
	if (ptr == NULL)
		return (NULL);
	if (*head == NULL)
		ptr->next = NULL;
	else
		ptr->next = *head;
	ptr->str = strdup(str);
	ptr->len = _strlen(str);
	*head = ptr;
	return (*head);
}
