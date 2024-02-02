#include "hash_tables.h"

/**
 * hash_table_print - function that prints a hash table
 * @ht: the hash table
 */

void hash_table_print(const hash_table_t *ht)
{
	int p = 0;
	unsigned long int i;
	hash_node_t *cur;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		cur = ht->array[i];

		while (cur != NULL)
		{
			if (p)
				printf(", ");

			printf("'%s': '%s'", cur->key, cur->value);

			p = 1;
			cur = cur->next;
		}
	}
	printf("}\n");
}
