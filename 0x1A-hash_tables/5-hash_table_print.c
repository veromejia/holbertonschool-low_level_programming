#include "hash_tables.h"

/**
 * hash_table_print - retrieves a value associated with key
 * @ht: Pointer to hash table
 * Return: Print
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *tmp;
	unsigned long int idx = 0;
	int counter = 0;

	if (!ht)
		return;

	printf("{");
	while (idx < ht->size)
	{
		tmp = ht->array[idx];
		while (tmp)
		{
			if (counter != 0)
				printf(", ");
			printf("'%s': '%s'", tmp->key, tmp->value);
			tmp = tmp->next;
			counter = 1;
		}
		idx++;
	}
	printf("}\n");
}
