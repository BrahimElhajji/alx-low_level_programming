#include "hash_tables.h"

/**
 * hash_table_create - function that creates a hash table
 * @size: the size of the array
 * Return: table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned int i;
	hash_table_t *table;

	if (table == NULL)
		return NULL;

	table = malloc(sizeof(hash_table_t));
	table->size = size;
	table->array = calloc(table->size, sizeof(hash_node_t));

	for (i = 0; i < table->size; i++)
		table->array[i] = NULL;

	return (table);
}
