#include "lists.h"

/**
 * list_len - function that returns the number of elements in a linked list_t
 * @h: a pointer to structer
 * Return: node_c
 */

size_t list_len(const list_t *h)
{
	size_t node_c = 0;

	while (h != NULL)
	{
		h = h->next;
		node_c++;
	}
	return (node_c);
}
