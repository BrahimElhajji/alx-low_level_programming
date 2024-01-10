#include "lists.h"

/**
 * sum_dlistint - function that returns the sum of all the data of a list
 * @head: pointer to the head of the nodes
 * Return: s
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *ptr;
	int s = 0;

	ptr = head;

	while (ptr != NULL)
	{
		s = s + ptr->n;
		ptr = ptr->next;
	}

	return (s);
}
