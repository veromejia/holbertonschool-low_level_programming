#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a hash table
 * @ht: the hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int idx;
	hash_node_t *temp;

	if (!ht)
		return;

	for (idx = 0; idx < ht->size; idx++)
	{
		if (ht->array[idx])
		{
			while (ht->array[idx])
			{
				temp = ht->array[idx]->next;
				free(ht->array[idx]->key);
				free(ht->array[idx]->value);
				free(ht->array[idx]);
				ht->array[idx] = temp;
			}
			free(ht->array[idx]);
		}
	}

	free(ht->array);
	free(ht);
}
