#include "lists.h"

/**
* delete_dnodeint_at_index - function that deletes the node at index
* @head: double pointer to the head of the nodes
* @index: the position of the node to delete
* Return: 1 if it succeeded, -1 if it failed
*/

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *one_p = *head;
	dlistint_t *two_p = NULL;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		if ((*head)->next != NULL)
			(*head)->next->prev = NULL;
		free(*head);
		*head = (*head)->next;
		return (1);
	}

	while (index > 1)
	{
		if (one_p == NULL)
			return (-1);
		one_p = one_p->next;
		index--;
	}

	if (one_p->next == NULL)
		return (-1);

	two_p = one_p->next;

	if (two_p->next != NULL)
		two_p->next->prev = one_p;

	one_p->next = two_p->next;
	free(two_p);

	return (1);
}
