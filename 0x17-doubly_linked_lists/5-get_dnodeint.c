#include "lists.h"

/**
 * get_dnodeint_at_index - function that returns the nth node of a linked list
 * @head: pointer to the head of list
 * @index: the index of nodes
 * Return: NULL
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *ptr;
	unsigned int i = 0;

	ptr = head;
	while (ptr != NULL)
	{
		if (i == index)
			return (ptr);

		ptr = ptr->next;
		i++;
	}
	return (NULL);
}
