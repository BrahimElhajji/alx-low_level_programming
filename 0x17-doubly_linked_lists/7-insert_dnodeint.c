#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: double pointer to the head of the nodes
 * @idx: unsigned int and the position of the new node
 * @n: the data of new node
 * Return: the new node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *n_node = NULL;
	dlistint_t *second_p = *h;
	dlistint_t *third_p = NULL;

	if (h == NULL)
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(h, n));

	while (idx > 1)
	{
		if (second_p == NULL)
			return (NULL);
		second_p = second_p->next;
		idx--;
	}

	n_node = malloc(sizeof(dlistint_t));

	if (n_node == NULL)
		return (NULL);

	n_node->n = n;

	if (second_p->next == NULL)
	{
		second_p->next = n_node;
		n_node->prev = second_p;
	}
	else
	{
		third_p = second_p->next;
		second_p->next = n_node;
		third_p->prev = n_node;
		n_node->next = third_p;
		n_node->prev = second_p;
	}

	return (n_node);
}
