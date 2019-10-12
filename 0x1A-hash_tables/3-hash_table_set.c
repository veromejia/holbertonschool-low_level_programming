#include "hash_tables.h"

/**
 * hash_table_set - function that adds an element to the hash table.
 * @ht: is the hash table to add or update the key/value to
 * @key: the key
 * @value: value associated with the key.
 * Return: 1 if it success and 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new, *head;
	unsigned long int idx;

	if (!ht || !key || !value)
		return (0);
	idx = key_index((unsigned char *)key, ht->size);
	if (ht->array[idx])
	{
		head = ht->array[idx];
		if (!strcmp(key, head->key))
		{
			free(head->value);
			head->value = strdup(value);
			return (1);
		}
	}
	new = malloc(sizeof(hash_node_t));
	if (!new)
		return (0);
	new->key = strdup(key);
	new->value = strdup(value);
	new->next = ht->array[idx];
	ht->array[idx] = new;
	return (1);
}
