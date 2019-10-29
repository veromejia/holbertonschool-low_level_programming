#include "sort.h"

/**
 * insertion_sort_list - Funtion that sorts a doubly linked list of integers
 * in ascending order using the Insertion sort algorithm
 * @list: list to be sorted
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *head = *list;
	listint_t *tmp = (*list)->next;

	while (tmp != NULL)
	{
		while (head != NULL && tmp->n < head->n)
		{
			tmp = swap_nodes(tmp, head);
			head = tmp->prev;
			if (head == NULL)
				*list = tmp;
			print_list(*list);
		}
		head = tmp;
		tmp = tmp->next;
	}
}
/**
 * swap_nodes - swap to given nodes
 * @node1: fist node
 * @node2: second node
 * Return: the first node
 */

listint_t *swap_nodes(listint_t *node1, listint_t *node2)
{
	listint_t *temp;

	temp = node1->next;
	node1->next = node2->next;
	node2->next = temp;

	if (node1->next != NULL)
		node1->next->prev = node1;

	if (node2->next != NULL)
		node2->next->prev = node2;

	temp = node1->prev;
	node1->prev = node2->prev;
	node2->prev = temp;

	if (node1->prev != NULL)
		node1->prev->next = node1;

	if (node2->prev == NULL)
		return (node2);

	node2->prev->next = node2;
	return (node1);
}
