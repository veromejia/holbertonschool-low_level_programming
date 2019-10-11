#include "hash_tables.h"
/*
 * hash_table_create - function that creates a hash table.
 * @size: size of the array
 * Return: a pointer to the newly crated hash table on success and NULL on fail
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_ht = malloc(sizeof(hash_table_t));

	if (!new_ht)
		return (NULL);
	new_ht->size = size;
	new_ht->array = malloc(size * sizeof(hash_node_t *));
	if (!new_ht->array)
		return (NULL);
	return (new_ht);
}
