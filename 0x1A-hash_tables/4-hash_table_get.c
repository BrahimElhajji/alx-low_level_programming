#include "hash_tables.h"

/**
 * hash_table_get - function that retrieves a value associated with a key
 * @ht: the hash table to look into
 * @key: the key to looking for
 * Return: value associated with the element, NULL if key couldn’t be found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *cur;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);

	cur = ht->array[index];
	while (cur != NULL)
	{
		if (strcmp(cur->key, key) == 0)
		{
			return (cur->value);
		}
		cur = cur->next;
	}

	return (NULL);
}
