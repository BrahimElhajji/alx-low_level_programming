#include "lists.h"

/**
 * print_listint - function that returns the number of elements in linked list
 * @h: pointer to the listint_t
 * Return: i
 */

size_t listint_len(const listint_t *h)
{
	int i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
